/* ResSem.h */ 
//----------------------------------------------------------------------------------------
//
//  Project: CCore 1.02
//
//  Tag: XCore
//
//  License: Boost Software License - Version 1.0 - August 17th, 2003 
//
//            see http://www.boost.org/LICENSE_1_0.txt or the local copy
//
//  Copyright (c) 2010 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------

#ifndef CCore_inc_task_ResSem_h
#define CCore_inc_task_ResSem_h
 
#include <CCore/inc/task/TaskList.h>

namespace CCore {

/* classes */ 

class ResSem;

/* class ResSem */ 

class ResSem : public Funchor_nocopy
 {
   TextLabel name;
   ulen count;
   ulen max_count;
   TaskList take_list;
   TaskList wait_list;
   
  private:
  
   static AutoTextNameType ObjName;
    
   template <class ... TT> 
   static void Log(const char *format,const TT & ... tt);
   
   void init(ulen max_count);
   
   template <class T,class F,class FL>
   void give_locked(T cur,F Release,FL ReleaseList);
   
   bool take_locked(MSec timeout);
   
   bool wait_locked(MSec timeout);
   
  public: 
   
   // constructors
  
   explicit ResSem(ulen max_count);
   
   ResSem(TextLabel name,ulen max_count);
   
   ~ResSem();
   
   TextLabel getName() const { return name; }
   
   // give
   
   void give();
   
   void give_int();
   
   void give_any();
   
   // take
  
   bool try_take();
  
   void take();
  
   bool take(MSec timeout);
  
   bool take(TimeScope time_scope);
   
   // wait
   
   bool try_wait();
   
   void wait();
  
   bool wait(MSec timeout);
   
   bool wait(TimeScope time_scope);
   
   // functions
   
   Function<void (void)> function_give() { return FunctionOf(this,&ResSem::give); }
   
   Function<void (void)> function_give_int() { return FunctionOf(this,&ResSem::give_int); }
   
   Function<void (void)> function_give_any() { return FunctionOf(this,&ResSem::give_any); }
 };
 
} // namespace CCore
 
#endif
 
