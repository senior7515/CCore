/* SysTask.h */ 
//----------------------------------------------------------------------------------------
//
//  Project: CCore 1.02
//
//  Tag: Target/Vanilla-H
//
//  License: Boost Software License - Version 1.0 - August 17th, 2003 
//
//            see http://www.boost.org/LICENSE_1_0.txt or the local copy
//
//  Copyright (c) 2011 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------

#ifndef CCore_inc_sys_SysTask_h
#define CCore_inc_sys_SysTask_h

#include <CCore/inc/sys/SysError.h>
 
namespace CCore {
namespace Sys {

/* types */ 

typedef unsigned TaskIdType; // integral type <= Atomic::Type

/* functions */ 

void YieldTask() noexcept;
 
void SleepTask(MSec time) noexcept;
 
TaskIdType GetTaskId() noexcept; // !=0

/* classes */

struct TaskEntry;

/* struct TaskEntry */

typedef void (*TaskEntryFunc)(TaskEntry *arg);

struct TaskEntry
 {
  // public
  
  void init(TaskEntryFunc entry) noexcept;
  
  ErrorType create() noexcept;
 };
 
} // namespace Sys
} // namespace CCore
 
#endif
 

