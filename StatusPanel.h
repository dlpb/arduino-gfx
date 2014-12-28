#ifndef STATUSPANEL
#include "Panel.h"
#define STATUSPANEL

#define MAX_ITEMS 3
#define MAX_ITEM_LENGTH 8

class StatusPanel : public Panel 
{
  private:
    char items[MAX_ITEMS][MAX_ITEM_LENGTH];
  public:
    StatusPanel();
    void set_text(int item, char* text);
    char* get_text(int item);
    void render(Adafruit_ILI9341 *tft);

};
#endif
