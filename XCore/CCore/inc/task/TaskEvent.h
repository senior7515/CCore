/* TaskEvent.h */ 
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
//  Copyright (c) 2012 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------

#ifndef CCore_inc_task_TaskEvent_h
#define CCore_inc_task_TaskEvent_h

#include <CCore/inc/EventRecorder.h>
#include <CCore/inc/sys/SysTime.h>
 
//#define CCORE_TASK_EVENT_ENABLE

#define CCORE_TASK_EVENT_ENABLE_SYNC
#define CCORE_TASK_EVENT_ENABLE_PROTO
#define CCORE_TASK_EVENT_ENABLE_DEV

namespace CCore {

/* classes */

struct TaskEventAlgo;

class TaskEventHostType;

struct TaskNumber;

struct TaskSwitchEvent;

/* struct TaskEventAlgo */

struct TaskEventAlgo
 {
  static const ulen RecordAlign = 4 ;
  
  static const uint64 TimeFreq = Sys::ClocksPerSec ;
  
  static EventTimeType GetTime() { return (EventTimeType)Sys::GetClockTime(); }
 };

/* types */

typedef EventRecorder<TaskEventAlgo> TaskEventRecorder;

/* class TaskEventHostType */

#ifdef CCORE_TASK_EVENT_ENABLE

class TaskEventHostType : public EventRecorderHost<TaskEventRecorder>
 {
  public:
 
#ifdef CCORE_TASK_EVENT_ENABLE_SYNC
 
   template <class T,class ... SS>
   void addSync(SS && ... ss)
    {
     add<T>( std::forward<SS>(ss)... );
    }
 
#else
 
   template <class T,class ... SS>
   void addSync(SS && ...)
    {
     // do nothing 
    }
 
#endif 
 
#ifdef CCORE_TASK_EVENT_ENABLE_PROTO
   
   template <class T,class ... SS>
   void addProto(SS && ... ss)
    {
     add<T>( std::forward<SS>(ss)... );
    }
 
#else
 
   template <class T,class ... SS>
   void addProto(SS && ...)
    {
     // do nothing 
    }
 
#endif
 
#ifdef CCORE_TASK_EVENT_ENABLE_DEV
   
   template <class T,class ... SS>
   void addDev(SS && ... ss)
    {
     add<T>( std::forward<SS>(ss)... );
    }
 
#else
 
   template <class T,class ... SS>
   void addDev(SS && ...)
    {
     // do nothing 
    }
 
#endif
 };

#else

class TaskEventHostType
 {
  public:
  
   class StartStop : NoCopy
    {
     public: 
      
      StartStop(TaskEventHostType &,TaskEventRecorder *) 
       {
       } 
    };
   
   template <class T,class ... SS>
   void add(SS && ...)
    {
     // do nothing 
    }
   
   template <class T,class ... SS>
   void addSync(SS && ...)
    {
     // do nothing 
    }
 
   template <class T,class ... SS>
   void addProto(SS && ...)
    {
     // do nothing 
    }
 
   template <class T,class ... SS>
   void addDev(SS && ...)
    {
     // do nothing 
    }
 
   void tick()
    {
     // do nothing
    }
 };

#endif

/* global TaskEventHost */

extern TaskEventHostType TaskEventHost;

/* struct TaskNumber */

struct TaskNumber
 {
  typedef uint16 ValueType;
  
  enum Value : uint16
   {
    EnterInt,
    LeaveInt,
    
    TaskBase
   };
  
  static const ValueType Base = TaskBase ;
  static const ValueType Lim = Base+DefaultEventElementCount ;
  
  static EventIdType Register(EventMetaInfo &info);  
 };

/* struct TaskSwitchEvent */

struct TaskSwitchEvent
 {
  EventTimeType time;
  EventIdType id;
  
  uint16 task;
  
  void init(EventTimeType time_,EventIdType id_,uint16 task_)
   {
    time=time_;
    id=id_;
    
    task=task_;
   }
  
  static void * Offset_time(void *ptr) { return &(static_cast<TaskSwitchEvent *>(ptr)->time); }
  
  static void * Offset_id(void *ptr) { return &(static_cast<TaskSwitchEvent *>(ptr)->id); }
  
  static void * Offset_task(void *ptr) { return &(static_cast<TaskSwitchEvent *>(ptr)->task); }
  
  static void Register(EventMetaInfo &info,EventMetaInfo::EventDesc &desc);
 };

} // namespace CCore
 
#endif
 

