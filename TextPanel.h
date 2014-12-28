#ifndef TEXTPANEL
#include "Panel.h"
#define TEXTPANEL

class TextPanel : public Panel 
{
  private:
    char text[32];
  public:
    void set_text(char* text);
    char* get_text();
    void render(Adafruit_ILI9341 *tft);

};
#endif
