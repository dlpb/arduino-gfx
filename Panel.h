#ifndef PANEL
#include <Adafruit_ILI9341.h>
#include <Adafruit_GFX.h>

#define PANEL

class Panel 
{
  private:
    int x, y, w, h;
  
  public: 
    Panel();
       
    int get_width();
    int get_height();
    int get_x();
    int get_y();
    
    void init(int xx, int yy, int ww, int hh);
    void set_location(int x, int y);
    void set_size(int width, int height);
    
    virtual void render(Adafruit_ILI9341 *tft) 
    {
      Serial.println("Something wrong");
    }
};

#endif
