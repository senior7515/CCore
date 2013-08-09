/* LR1Estimate.h */
//----------------------------------------------------------------------------------------
//
//  Project: CondLangLR1 1.00
//
//  License: Boost Software License - Version 1.0 - August 17th, 2003 
//
//            see http://www.boost.org/LICENSE_1_0.txt or the local copy
//
//  Copyright (c) 2013 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------

#ifndef CondLangLR1_process_LR1Estimate_h
#define CondLangLR1_process_LR1Estimate_h

#include "lang/Lang.h"
#include "Set.h"

namespace App {

/* classes */

class LR1Estimate;

/* class LR1Estimate */

class LR1Estimate : public CmpComparable<LR1Estimate> , public NoThrowFlagsBase
 {
  public:
  
   using RuleSet = Set<Atom,SimpleJoiner> ;
   
   struct ExtRuleSet : NoThrowFlagsBase
    {
     bool shift;
     RuleSet rules;
     
     // constructors
     
     ExtRuleSet() : shift(true) {}
     
     ExtRuleSet(const RuleSet &rules_) : shift(false),rules(rules_) {}
     
     ExtRuleSet(bool shift_,const RuleSet &rules_) : shift(shift_),rules(rules_) {}

     // cmp objects
     
     CmpResult objCmp(const ExtRuleSet &obj) const
      {
       return AlphaCmp(shift,obj.shift,rules,obj.rules);
      }
     
     // operators
     
     friend ExtRuleSet operator + (const ExtRuleSet &a,const ExtRuleSet &b)
      {
       return ExtRuleSet( a.shift|b.shift , a.rules+b.rules );
      }

     // print object
     
     template <class P>
     void print(P &out) const
      {
       if( shift ) 
         {
          Putobj(out,"<-");
          
          if( rules.nonEmpty() ) Printf(out," #;",rules);
         }
       else
         {
          Putobj(out,rules);
         }
      }
    };
   
   using Rec = IndexPair<Atom,ExtRuleSet> ;
   
   using RecSet = Set<Rec,Joiner> ;
  
  private:
  
   bool empty;
   bool null;
   RuleSet alpha;
   RecSet beta;
  
  private: 
   
   LR1Estimate(bool empty_,bool null_,const RuleSet &alpha_,const RecSet &beta_) 
    : empty(empty_),null(null_),alpha(alpha_),beta(beta_) {}
   
   LR1Estimate(const LR1Estimate &a,const LR1Estimate &b)
    : empty(false),
      null(a.null&b.null)
    {
     // alpha
     
     if( a.null ) alpha=b.alpha;
        
     if( b.null || b.alpha.nonEmpty() ) alpha=alpha+a.alpha;
     
     // beta
     
     if( a.null ) 
       {
        beta=a.beta+b.beta;
       }
     else
       {
        beta=a.beta;
       }
        
     if( a.alpha.nonEmpty() )
       {
        RecSet cross(b.beta);
        
        for(auto p=cross.write(); +p ;++p) p->object=a.alpha;
           
        beta=beta+cross;
       }
    }
   
  public:
   
   // constructors
  
   LR1Estimate()
    {
     empty=true;
     null=false;
    }
   
   LR1Estimate(ElementNullType) : LR1Estimate() {}
   
   LR1Estimate(ElementOneType)
    {
     empty=false;
     null=true;
    }
   
   using Context = ulen ;
   
   LR1Estimate(Atom atom,ulen atom_count)
    {
     empty=false;
     null=false;
     
     if( atom.getIndex()<atom_count )
       {
        beta=RecSet( Rec(atom,ExtRuleSet()) );
       }
     else
       {
        alpha=RuleSet(atom);
       }
    }
   
   // methods
   
   bool operator + () const { return !empty; }
   
   bool operator ! () const { return empty; }
   
   bool set(const LR1Estimate &obj) { return SetCmp(*this,obj); }
   
   // properties
   
   bool isStrong() const { return !null && alpha.isEmpty() ; }
   
   // cmp objects
   
   CmpResult objCmp(const LR1Estimate &obj) const
    {
     return AlphaCmp(empty,obj.empty,null,obj.null,alpha,obj.alpha,beta,obj.beta);
    }
   
   // operations
   
   friend LR1Estimate operator + (const LR1Estimate &a,const LR1Estimate &b)
    {
     return LR1Estimate( a.empty&b.empty , a.null|b.null , a.alpha+b.alpha , a.beta+b.beta );   
    }
   
   friend LR1Estimate operator * (const LR1Estimate &a,const LR1Estimate &b)
    {
     if( a.empty || b.empty ) return LR1Estimate();
     
     if( a.isStrong() ) return a;
    
     return LR1Estimate(a,b);
    }
   
   // print object
   
   template <class P>
   void print(P &out) const
    {
     if( empty )
       {
        Putobj(out,"EMPTY");
       }
     else
       {
        if( null ) 
          {
           Putobj(out,"STOP");
           
           if( alpha.nonEmpty() ) Printf(out," (End) : #;",alpha);
           
           if( beta.nonEmpty() ) Printf(out," #;",beta);
          }
        else
          {
           if( alpha.nonEmpty() ) 
             {
              Printf(out,"(End) : #;",alpha);
              
              if( beta.nonEmpty() ) Printf(out," #;",beta);
             }
           else
             {
              Putobj(out,beta);
             }
          }
       }
    }
 };

} // namespace App

#endif

