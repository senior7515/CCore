/* Keyboard.h */ 
//----------------------------------------------------------------------------------------
//
//  Project: CCore 1.09
//
//  Tag: General
//
//  License: Boost Software License - Version 1.0 - August 17th, 2003 
//
//            see http://www.boost.org/LICENSE_1_0.txt or the local copy
//
//  Copyright (c) 2015 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------

#ifndef CCore_inc_video_Keyboard_h
#define CCore_inc_video_Keyboard_h
 
#include <CCore/inc/Gadget.h>

namespace CCore {
namespace Video {

/* consts */

enum VKey : unsigned
 {
  VKey_Null = 0,
    
  VKey_Esc,
  VKey_F1,
  VKey_F2,
  VKey_F3,
  VKey_F4,
  VKey_F5,
  VKey_F6,
  VKey_F7,
  VKey_F8,
  VKey_F9,
  VKey_F10,
  VKey_F11,
  VKey_F12
  
  // TODO
 };

enum KeyMod : unsigned
 {
  KeyMod_Null       =      0,
    
  KeyMod_Shift      = 0x0001,
  KeyMod_Ctrl       = 0x0002,
  KeyMod_Alt        = 0x0004,
  
  KeyMod_CapsLock   = 0x0100,
  KeyMod_NumLock    = 0x0200,
  KeyMod_ScrollLock = 0x0400,
  
  KeyMod_Ext        = 0x1000
 };

inline KeyMod operator | (KeyMod a,KeyMod b) { return KeyMod(unsigned(a)|b); }

inline KeyMod operator |= (KeyMod &a,KeyMod b) { return a=(a|b); }

} // namespace Video
} // namespace CCore
 
#endif
 

