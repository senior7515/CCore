/* Scanf.cpp */ 
//----------------------------------------------------------------------------------------
//
//  Project: CCore 1.05
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
 
#include <CCore/inc/Scanf.h>
 
namespace CCore {

/* struct ScanDevBase */  

const char * ScanDevBase::Find(const char *format,char ch)
 {
  for(; NotFound(*format,ch) ;format++);
  
  return format;
 }

} // namespace CCore
 

