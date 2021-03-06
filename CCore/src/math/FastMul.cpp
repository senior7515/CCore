/* FastMul.cpp */ 
//----------------------------------------------------------------------------------------
//
//  Project: CCore 1.02
//
//  Tag: General
//
//  License: Boost Software License - Version 1.0 - August 17th, 2003 
//
//            see http://www.boost.org/LICENSE_1_0.txt or the local copy
//
//  Copyright (c) 2011 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------
 
#include <CCore/inc/math/FastMul.h>

#include <CCore/inc/Exception.h>
 
namespace CCore {
namespace Math {

/* functions */

void GuardFastMulOverlen(unsigned d)
 {
  Printf(Exception,"CCore::Math::GuardFastMulOverlen(d=#;) : overlen",d);
 }

void GuardFastMulOverbits(unsigned d,unsigned extra)
 {
  Printf(Exception,"CCore::Math::GuardFastMulOverbits(d=#;,extra=#;) : overbits",d,extra);
 }

} // namespace Math
} // namespace CCore
 

