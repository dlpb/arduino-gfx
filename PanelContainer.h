#include "Panel.h"



#include <Adafruit_ILI9341.h>
#include <Adafruit_GFX.h>

#define TFT_DC 9
#define TFT_CS 6

#define MAX_PANELS 16
class PanelContainer 
{
  private:
    Panel* panels[MAX_PANELS];
    Adafruit_ILI9341* tft;
    TouchScreen *ts;
    int current;
    
  public:
    PanelContainer(Adafruit_ILI9341 *tft, TouchScreen *ts);
    void add_panel(Panel *panel);
    void render();
};
