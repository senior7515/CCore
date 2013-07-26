/* test0084.AnyPtr.cpp */ 
//----------------------------------------------------------------------------------------
//
//  Project: CCore 1.04
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

#include <CCore/test/test.h>

#include <CCore/inc/AnyPtr.h>

namespace App {

namespace Private_0084 {

/* struct PrintVal */

struct PrintVal
 {
  template <class T>
  void operator () (T *ptr)
   {
    Printf(Con,"val = #;\n",*ptr);
   }
 };

} // namespace Private_0084
 
using namespace Private_0084; 
 
/* Testit<84> */ 

template<>
const char *const Testit<84>::Name="Test84 AnyPtr";

template<>
bool Testit<84>::Main() 
 {
  {
   AnyPtr<int,short> ptr;
    
   int a=1;
   short b=2;
    
   ptr=&a;
    
   ptr.apply( PrintVal() );
    
   ptr.applyFor<int>( [] (int *ptr) { Printf(Con,"int val = #;\n",*ptr); } );
   ptr.applyFor<short>( [] (short *ptr) { Printf(Con,"short val = #;\n",*ptr); } );
   
   ptr=&b;
    
   ptr.apply( PrintVal() );
   
   ptr.applyFor<int>( [] (int *ptr) { Printf(Con,"int val = #;\n",*ptr); } );
   ptr.applyFor<short>( [] (short *ptr) { Printf(Con,"short val = #;\n",*ptr); } );
   
   ptr=Nothing;
   ptr=nullptr;
  }
  
  {
   AnyPtr_const<int,short> ptr;
    
   const int a=1;
   const short b=2;
    
   ptr=&a;
    
   ptr.apply( PrintVal() );
    
   ptr.applyFor<int>( [] (const int *ptr) { Printf(Con,"int val = #;\n",*ptr); } );
   ptr.applyFor<short>( [] (const short *ptr) { Printf(Con,"short val = #;\n",*ptr); } );
   
   ptr=&b;
    
   ptr.apply( PrintVal() );
   
   ptr.applyFor<int>( [] (const int *ptr) { Printf(Con,"int val = #;\n",*ptr); } );
   ptr.applyFor<short>( [] (const short *ptr) { Printf(Con,"short val = #;\n",*ptr); } );
   
   ptr=Nothing;
   ptr=nullptr;
  }
  
  return true;
 }
 
} // namespace App
 
