

#include "Panel.h"


  Panel::Panel()
  {
    init(0, 0, 240, 40);
  }
   
  void Panel::init(int xx, int yy, int ww, int hh)
  {
    x = xx;
    y = yy; 
    h = hh;
    w = ww;
  }
  
  void Panel::set_location(int xx, int yy)
  {
    x = xx;
    y = yy;
  }
  
  void Panel::set_size(int ww, int hh)
  {
    w = ww;
    h = hh;
  }
  
  int Panel::get_width(){ return w;}
  int Panel::get_height(){ return h;}
  int Panel::get_x(){ return x;}
  int Panel::get_y(){ return y;}
  

