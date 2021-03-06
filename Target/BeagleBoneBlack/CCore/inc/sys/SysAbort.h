/* SysAbort.h */ 
//----------------------------------------------------------------------------------------
//
//  Project: CCore 1.08
//
//  Tag: Target/BeagleBoneBlack
//
//  License: Boost Software License - Version 1.0 - August 17th, 2003 
//
//            see http://www.boost.org/LICENSE_1_0.txt or the local copy
//
//  Copyright (c) 2014 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------

#ifndef CCore_inc_sys_SysAbort_h
#define CCore_inc_sys_SysAbort_h

#include <CCore/inc/Gadget.h>
 
namespace CCore {
namespace Sys {

/* functions */ 

void Abort(StrLen str);
 
void Abort(const char *zstr);

} // namespace Sys
} // namespace CCore
 
#endif
 

