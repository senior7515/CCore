/* StepEval.h */
//----------------------------------------------------------------------------------------
//
//  Project: CCore 1.07
//
//  Tag: General
//
//  License: Boost Software License - Version 1.0 - August 17th, 2003 
//
//            see http://www.boost.org/LICENSE_1_0.txt or the local copy
//
//  Copyright (c) 2013 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------

#ifndef CCore_inc_StepEval_h
#define CCore_inc_StepEval_h

#include <CCore/inc/FunctorType.h>
#include <CCore/inc/List.h>
#include <CCore/inc/MemBase.h>
 
namespace CCore {

/* classes */

template <class Ctx> class StepEval;

/* class StepEval<Ctx> */

template <class Ctx> 
class StepEval : NoCopy
 {
  public:
 
   using StepId = void * ;
 
   template <class T>
   struct RetStep
    {
     T &obj;
     StepId id;
   
     RetStep(T &obj_,StepId id_) : obj(obj_),id(id_) {}
    };
   
  private:
  
   Ctx ctx;
   
   struct NodeBase : MemBase_nocopy
    {
     DLink<NodeBase> link;
     
     ulen lock_count;
     NodeBase *dep;
     bool gated;
     
     NodeBase(StepId dep_,bool gated_) 
      { 
       lock_count=0;
       dep=static_cast<NodeBase *>(dep_); 
       gated=gated_;
      }
     
     virtual ~NodeBase() {}
     
     bool incLock()
      {
       bool ret = !lock_count && !gated ;
       
       lock_count++;
       
       return ret;
      }
     
     bool decLock()
      {
       --lock_count;
       
       return !lock_count && !gated ;
      }
     
     virtual void call(StepEval<Ctx> &step_eval)=0;
     
     virtual void final(StepEval<Ctx> &step_eval)=0;
    };
 
   struct ProbeSet_final
    {
     template <class T,void (T::*M)(StepEval<Ctx> &)> struct Host;
    
     template <class T>
     static constexpr bool Probe(...) { return false; } 
    
     template <class T>
     static constexpr bool Probe(Host<T,&T::final> *) { return true; }
    };
   
   template <class T> 
   struct Has_final : Meta::Has<T,ProbeSet_final> {};
   
   template <class T>
   struct CallFinal_method
    {
     static void Do(T &obj,StepEval<Ctx> &step_eval)
      {
       obj.final(step_eval);
      }
    };
   
   template <class T>
   struct CallFinal_no
    {
     static void Do(T &,StepEval<Ctx> &)
      {
       // do nothing
      }
    };
   
   template <class T>
   struct CallFinal : Meta::Select<Has_final<T>::Ret,CallFinal_method<T>,CallFinal_no<T> > {};
   
   template <class T>
   struct Node : NodeBase
    {
     T obj;
     
     template <class Init>
     Node(Init init,StepId dep,bool gated) : NodeBase(dep,gated),obj(init) {}
     
     ~Node() {}
     
     virtual void call(StepEval<Ctx> &step_eval) { obj(step_eval); }
     
     virtual void final(StepEval<Ctx> &step_eval) { CallFinal<T>::Do(obj,step_eval); }
     
     RetStep<T> getRetStep() { return RetStep<T>(obj,(NodeBase *)this); } 
    };
 
   using Algo = typename DLink<NodeBase>::template LinearAlgo<&NodeBase::link> ;
   
   typename Algo::Top ready_list;
   typename Algo::Top locked_list;
   
  private: 
   
   template <class FuncInit>
   Node<FunctorTypeOf<FuncInit> > * create(FuncInit func_init,StepId dep,bool gated)
    {
     return new Node<FunctorTypeOf<FuncInit> >(func_init,dep,gated);
    }
   
   void destroy(NodeBase *node)
    {
     delete node;
    }
   
   void lockStep(NodeBase *node);
   
   void unlockStep(NodeBase *node);
   
  public: 
 
   class Gate : public MemBase_nocopy  
    {
      SLink<Gate> link;
     
      StepEval<Ctx> *eval; 
     
      typename Algo::Top list;
      bool opened;
      
      friend class StepEval;  
      
     public:
     
      explicit Gate(StepEval<Ctx> *eval);
      
      ~Gate(); 
      
      template <class FuncInit>
      RetStep<FunctorTypeOf<FuncInit> > createStep(FuncInit func_init,StepId dep=0); // dep executes after
      
      void open();
    };
   
  private: 
   
   using GateAlgo = typename SLink<Gate>::template LinearAlgo<&Gate::link> ;
   
   typename GateAlgo::Top gate_list;
   
  private: 
   
   class Guard : NoCopy
    {
      StepEval<Ctx> *eval;
      NodeBase *node;
      
     public:
      
      Guard(StepEval<Ctx> *eval_,NodeBase *node_) 
       {  
        eval=eval_;
        node=node_;
       }
      
      ~Guard() 
       {  
        eval->destroy(node);
       }
    };
   
   void destroy(Gate *gate)
    {
     delete gate;
    }
   
   template <class List>
   void destroyList(List &list)
    {
     while( auto *node=list.del() ) destroy(node);
    }
   
   template <class List>
   void finalList(List &list)
    {
     for(auto cur=list.start(); +cur ;++cur) cur->final(*this);
    }
   
  public:

   template <class ... SS>
   explicit StepEval(SS && ... ss) : ctx( std::forward<SS>(ss)... ) {}
   
   ~StepEval();
   
   Ctx & getCtx() { return ctx; }
   
   Gate * createGate(); 
   
   template <class FuncInit>
   RetStep<FunctorTypeOf<FuncInit> > createStep(FuncInit func_init,StepId dep=0); // dep executes after
   
   void run();
 };

template <class Ctx> 
void StepEval<Ctx>::lockStep(NodeBase *node)
 {
  if( node )
    {
     if( node->incLock() )
       {
        ready_list.del(node);
        locked_list.ins(node);
       }
    }
 }

template <class Ctx> 
void StepEval<Ctx>::unlockStep(NodeBase *node)
 {
  if( node )
    {
     if( node->decLock() )
       {
        locked_list.del(node);
        ready_list.ins(node);
       }
    }
 }

template <class Ctx>
StepEval<Ctx>::Gate::Gate(StepEval<Ctx> *eval_)
 {
  eval=eval_;
  opened=false;
 }

template <class Ctx>
StepEval<Ctx>::Gate::~Gate() 
 { 
  eval->destroyList(list);
 }

template <class Ctx>
template <class FuncInit>
auto StepEval<Ctx>::Gate::createStep(FuncInit func_init,StepId dep) -> RetStep<FunctorTypeOf<FuncInit> >
 {
  if( opened )
    {
     return eval->createStep(func_init,dep);
    }
  else
    {
     auto *node=eval->create(func_init,dep,true);
    
     list.ins(node);
    
     eval->lockStep(node->dep);
    
     return node->getRetStep();
    }
 }

template <class Ctx>
void StepEval<Ctx>::Gate::open()
 {
  if( !opened )
    {
     opened=true;
     
     while( auto *node=list.del() )
       {
        node->gated=false;
        
        if( node->lock_count )
          eval->locked_list.ins(node);
        else
          eval->ready_list.ins(node);
       }
    }
 }

template <class Ctx> 
StepEval<Ctx>::~StepEval()
 {
  destroyList(ready_list);
  destroyList(locked_list);
  destroyList(gate_list);
 }

template <class Ctx>
auto StepEval<Ctx>::createGate() -> Gate * 
 { 
  Gate *ret=new Gate(this);
  
  gate_list.ins(ret);
   
  return ret; 
 }

template <class Ctx> 
template <class FuncInit>
auto StepEval<Ctx>::createStep(FuncInit func_init,StepId dep) -> RetStep<FunctorTypeOf<FuncInit> >
 {
  auto *node=create(func_init,dep,false);
  
  ready_list.ins(node);
  
  lockStep(node->dep);
  
  return node->getRetStep();
 }

template <class Ctx> 
void StepEval<Ctx>::run()
 {
  while( auto *node=ready_list.del() )
    {
     Guard guard(this,node);
     
     node->call(*this);
     
     unlockStep(node->dep);
    }
  
  for(auto cur=gate_list.start(); +cur ;++cur) finalList(cur->list);
  
  finalList(locked_list);
 }

/* type StepGate<Ctx> */

template <class Ctx>
using StepGate = typename StepEval<Ctx>::Gate ;

} // namespace CCore
 
#endif
 


