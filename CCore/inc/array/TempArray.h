/* TempArray.h */ 
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

#ifndef CCore_inc_array_TempArray_h
#define CCore_inc_array_TempArray_h

#include <CCore/inc/MemBase.h>
 
namespace CCore {

/* classes */

template <class T,ulen StackLen> class TempArray; 

/* class TempArray<T,ulen StackLen> */

template <class T,ulen StackLen> 
class TempArray : NoCopy
 {
   static_assert( std::is_pod<T>::value ,"CCore::TempArray<T,...> : T must be POD");
  
  private:
  
   T *ptr;
   ulen len;
   
   T buf[StackLen];
   
  private:
   
   void init()
    {
     ptr=buf;
     len=StackLen;
    }
   
   void alloc(ulen len_)
    {
     ptr=static_cast<T *>(MemAlloc(LenOf(len_,sizeof (T))));
     len=len_;
    }
   
   void free()
    {
     if( ptr!=buf ) MemFree(ptr);
    }
  
  public:
   
   // constructors
   
   TempArray() { init(); }
   
   explicit TempArray(ulen len_)
    {
     if( len_<=StackLen )
       {
        init();
       }
     else
       {
        alloc(len_);
       }
    }
   
   ~TempArray() { free(); }
   
   // methods
   
   void provide(ulen len_)
    {
     if( len_<=len ) return; 
     
     free();
     init();
     
     if( len_>StackLen ) alloc(len_);
    }
   
   // range access
   
   T * getPtr() { return ptr; }
   
   const T * getPtr() const { return ptr; }
   
   const T * getPtr_const() const { return ptr; }
   
   ulen getLen() const { return len; }
   
   // index access
   
   T & operator [] (ulen index)
    {
     return ptr[index];
    }
   
   const T & operator [] (ulen index) const
    {
     return ptr[index];
    }
   
   T & at(ulen index)
    {
     GuardIndex(index,len);
    
     return ptr[index];
    }
   
   const T & at(ulen index) const
    {
     GuardIndex(index,len);
    
     return ptr[index];
    }
 };

} // namespace CCore
 
#endif
 
