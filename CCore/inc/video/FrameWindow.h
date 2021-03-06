/* FrameWindow.h */ 
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

#ifndef CCore_inc_video_FrameWindow_h
#define CCore_inc_video_FrameWindow_h

#include <CCore/inc/MemBase.h>

#include <CCore/inc/video/Point.h>
#include <CCore/inc/video/Keyboard.h>
#include <CCore/inc/video/Mouse.h>
#include <CCore/inc/video/Color.h>
 
namespace CCore {
namespace Video {

/* consts */

enum CmdDisplay : unsigned
 {
  CmdDisplay_Normal,
  CmdDisplay_Minimized,
  CmdDisplay_Maximized,
  CmdDisplay_Restore
 };

/* classes */

struct Desktop;

class WinControl;

class FrameWindow;

/* struct Desktop */

struct Desktop
 {
  virtual WinControl * createControl()=0;
  
  virtual Point getScreenSize()=0;
  
  static const unsigned DefaultLim = 100 ;
  
  virtual bool pump(unsigned lim=DefaultLim)=0;
  
  virtual void wait()=0;
  
  virtual void wait(MSec timeout)=0;
 };

/* class WinControl */

class WinControl : public MemBase_nocopy
 {
  protected:
  
   FrameWindow *frame = 0 ;
   Point max_size = Null ;
   bool is_alive = false ;
   
   friend class FrameWindow;
   
  public: 
   
   WinControl() {}
   
   virtual ~WinControl() {}
   
   // create/destroy
   
   virtual void createMain(Point max_size)=0;
   
   virtual void createMain(Pane pane,Point max_size)=0; // screen
   
   virtual void create(Pane pane,Point max_size)=0; // screen
   
   virtual void create(WinControl *parent,Pane pane,Point max_size)=0; // screen
   
   virtual void destroy()=0;
   
   bool isAlive() const { return is_alive; }
   
   bool isDead() const { return !is_alive; }
   
   Point getMaxSize() const { return max_size; }
   
   // operations
   
   virtual void setMaxSize(Point max_size)=0;
   
   virtual bool enableUserInput(bool en)=0; // return previous
   
   virtual void display(CmdDisplay cmd_display)=0;
   
   virtual void show()=0;
   
   virtual void hide()=0;
   
   virtual void update()=0;
   
   virtual void invalidate(Pane pane)=0;
   
   virtual void invalidate()=0;
   
   virtual ColorPlane getDrawPlane()=0;
   
   virtual void captureMouse()=0;
   
   virtual void releaseMouse()=0;
   
   virtual void setFocus()=0;
   
   virtual void setMouseShape(MouseShape mshape)=0;
   
   virtual void move(Pane pane)=0; // screen
   
   virtual void moveTop()=0;
 };

/* class FrameWindow */

class FrameWindow : public MemBase_nocopy
 {
  protected:
   
   class Ptr : NoCopy
    {
      WinControl *ptr;
      
     public:
      
      explicit Ptr(Desktop *desktop)
       {
        ptr=desktop->createControl();
       }
      
      ~Ptr()
       {
        delete ptr;
       }
      
      WinControl * getPtr() const { return ptr; }
      
      WinControl * operator -> () const { return ptr; }
    };

   Ptr win;
   
  public:
   
   explicit FrameWindow(Desktop *desktop) : win(desktop) { win->frame=this; }
  
   virtual ~FrameWindow() {}
  
   // base
   
   virtual void alive()
    {
     // do nothing
    }
   
   virtual void dead()
    {
     // do nothing
    }
   
   virtual void setSize(Point size,bool buf_dirty)
    {
     Used(size);
     Used(buf_dirty);
     
     // do nothing
    }
   
   // keyboard
   
   virtual void gainFocus()
    {
     // do nothing
    }
   
   virtual void looseFocus()
    {
     // do nothing
    }
   
   virtual void key(VKey vkey,KeyMod kmod)
    {
     Used(vkey);
     Used(kmod);
     
     // do nothing
    }
   
   virtual void key(VKey vkey,KeyMod kmod,unsigned repeat)
    {
     for(; repeat ;repeat--) key(vkey,kmod);
    }
   
   virtual void keyUp(VKey vkey,KeyMod kmod)
    {
     Used(vkey);
     Used(kmod);
     
     // do nothing
    }
   
   virtual void keyUp(VKey vkey,KeyMod kmod,unsigned repeat)
    {
     for(; repeat ;repeat--) keyUp(vkey,kmod);
    }
   
   // character
   
   virtual void putch(char ch)
    {
     Used(ch);
     
     // do nothing
    }
   
   virtual void putch(char ch,unsigned repeat)
    {
     for(; repeat ;repeat--) putch(ch);
    }
   
   virtual void putchAlt(char ch)
    {
     Used(ch);
     
     // do nothing
    }
   
   virtual void putchAlt(char ch,unsigned repeat)
    {
     for(; repeat ;repeat--) putchAlt(ch);
    }
   
   // mouse
   
   virtual void clickLeft(Point point,MouseKey mkey)
    {
     Used(point);
     Used(mkey);
     
     // do nothing
    }
   
   virtual void upLeft(Point point,MouseKey mkey)
    {
     Used(point);
     Used(mkey);
     
     // do nothing
    }
 
   virtual void dclickLeft(Point point,MouseKey mkey)
    {
     Used(point);
     Used(mkey);
     
     // do nothing
    }
   
   virtual void clickRight(Point point,MouseKey mkey)
    {
     Used(point);
     Used(mkey);
     
     // do nothing
    }
   
   virtual void upRight(Point point,MouseKey mkey)
    {
     Used(point);
     Used(mkey);
     
     // do nothing
    }
   
   virtual void dclickRight(Point point,MouseKey mkey)
    {
     Used(point);
     Used(mkey);
     
     // do nothing
    }
   
   virtual void move(Point point,MouseKey mkey)
    {
     Used(point);
     Used(mkey);
     
     // do nothing
    }
   
   virtual void wheel(Point point,MouseKey mkey,int delta)
    {
     Used(point);
     Used(mkey);
     Used(delta);
     
     // do nothing
    }
 
   virtual void setMouseShape(Point point)
    {
     Used(point);
     
     win->setMouseShape(Mouse_Arrow);
    }
 };

} // namespace Video
} // namespace CCore
 
#endif
 

