/* SysNet.h */ 
//----------------------------------------------------------------------------------------
//
//  Project: CCore 1.05
//
//  Tag: Target/LIN64
//
//  License: Boost Software License - Version 1.0 - August 17th, 2003 
//
//            see http://www.boost.org/LICENSE_1_0.txt or the local copy
//
//  Copyright (c) 2013 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------

#ifndef CCore_inc_sys_SysNet_h
#define CCore_inc_sys_SysNet_h
 
#include <CCore/inc/sys/SysWait.h>
#include <CCore/inc/sys/SysError.h>

#include <CCore/inc/TimeScope.h>
#include <CCore/inc/net/UDPoint.h>

namespace CCore {
namespace Sys {

/* classes */

struct UDPSocket;

struct AsyncUDPSocket;

struct AsyncUDPSocketWait;

/* struct UDPSocket */

struct UDPSocket
 {
  // public
  
  struct InResult
   {
    Net::UDPoint src;
    ulen len;
    ErrorType error;
   };
  
  // private data
  
  typedef int Type;
  
  Type sockid;
  
  // private
  
  struct OpenType
   {
    Type sockid;
    ErrorType error;
   };
  
  static OpenType Open(Net::UDPort udport) noexcept;
  
  static ErrorType Close(Type sockid) noexcept;
  
  static WaitResult Wait_in(Type sockid,MSec timeout) noexcept;
  
  static ErrorType Outbound(Type sockid,Net::UDPoint dst,PtrLen<const uint8> data) noexcept;
  
  static InResult Inbound(Type sockid,PtrLen<uint8> buf) noexcept;
  
  // public
  
  ErrorType open(Net::UDPort udport)
   {
    OpenType result=Open(udport);
    
    sockid=result.sockid;
    
    return result.error; 
   }
  
  ErrorType close()
   {
    return Close(sockid);
   }
  
  ErrorType outbound(Net::UDPoint dst,PtrLen<const uint8> data)
   {
    return Outbound(sockid,dst,data);
   }
  
  WaitResult wait_in(MSec timeout)
   {
    return Wait_in(sockid,timeout);
   }
  
  WaitResult wait_in(TimeScope time_scope)
   {
    auto timeout=time_scope.get();
    
    if( !timeout ) return Wait_timeout;
    
    return wait_in(timeout);
   }
  
  InResult inbound(PtrLen<uint8> buf)
   {
    return Inbound(sockid,buf);
   } 
 };

/* struct AsyncUDPSocket */

struct AsyncUDPSocket
 {
  // public
  
  struct AsyncState;
  
  typedef AsyncState * Async;
  
  struct OutResult
   {
    bool pending;
    ErrorType error;
   };
  
  struct InResult
   {
    Net::UDPoint src;
    ulen len;
    ErrorType error;
   };
  
  struct StartInResult
   {
    bool pending;
    InResult result;
   };
  
  // private data
  
  typedef int Type;
  
  Type sockid;
  AsyncState *list;
  
  // private
  
  struct OpenType
   {
    Type sockid;
    ErrorType error;
   };
  
  static OpenType Open(Net::UDPort udport) noexcept;
  
  static ErrorType Close(Type sockid) noexcept;
  
  static OutResult StartOutbound(Type sockid,Async async,Net::UDPoint dst,PtrLen<const uint8> data) noexcept;
  
  static ErrorType CompleteOutbound(Type sockid,Async async) noexcept;
  
  static StartInResult StartInbound(Type sockid,Async async,PtrLen<uint8> buf) noexcept;
  
  static InResult CompleteInbound(Type sockid,Async async) noexcept;
  
  // public
  
  ErrorType open(Net::UDPort udport) noexcept;
  
  ErrorType close() noexcept;
  
  OutResult startOutbound(Async async,Net::UDPoint dst,PtrLen<const uint8> data) noexcept;
  
  ErrorType completeOutbound(Async async) noexcept;
  
  StartInResult startInbound(Async async,PtrLen<uint8> buf) noexcept;
  
  InResult completeInbound(Async async) noexcept;
 };

/* struct AsyncUDPSocketWait */

struct AsyncUDPSocketWait
 {
  // private
  
  class Engine;
  
  Engine *obj;
  AsyncUDPSocket::Async *asyncs;
  
  // public
  
  static const ulen MaxAsyncs = 50 ;
  
  ErrorType init(ulen async_count) noexcept;
  
  void exit() noexcept;
  
  AsyncUDPSocket::Async getAsync(ulen index) noexcept { return asyncs[index]; }
  
  bool addWait(ulen index) noexcept;
  
  bool delWait(ulen index) noexcept;
  
  WaitResult wait(MSec timeout) noexcept;
  
  WaitResult wait(TimeScope time_scope)
   {
    auto timeout=time_scope.get();
   
    if( !timeout ) return Wait_timeout; 
   
    return wait(timeout);
   }
  
  void interrupt() noexcept; // async , semaphore
  
  WaitResult waitAll(MSec timeout) noexcept;
  
  WaitResult waitAll(TimeScope time_scope)
   {
    auto timeout=time_scope.get();
   
    if( !timeout ) return Wait_timeout;
   
    return waitAll(timeout);
   }
 };

} // namespace Sys
} // namespace CCore
 
#endif
 

