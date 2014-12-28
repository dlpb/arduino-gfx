#include "StatusPanel.h"
#include "Colours.h"

StatusPanel::StatusPanel()
{
  init(0,0,240, 20);
}
void StatusPanel::set_text(int item, char* elem)
{
  if(item < MAX_ITEMS)
  {
    for(int i=0; i<MAX_ITEM_LENGTH; i++)
    {
      items[item][i] = elem[i];
    }
  }
}

void StatusPanel::render(Adafruit_ILI9341 *tft)
{
  int ww = get_width();
  int hh = get_height();
  int xx = get_x();
  int yy = get_y();
  
  Serial.print("Dimensions "); Serial.print(xx); Serial.print(","); Serial.print(yy); Serial.print("-"); Serial.print(ww); Serial.print(","); Serial.println(hh);
  tft->fillRect(xx, yy, ww, hh, MEDIUM_GREY);
  tft->drawRect(xx, yy, ww, hh, WHITE);
  tft->setTextColor(WHITE);  tft->setTextSize(1);
  tft->setCursor(xx+15, yy+6);
  tft->println(items[0]);
  tft->setCursor(xx+80, yy+6);
//  tft->println(items[1]);
  tft->println(millis());
  tft->setCursor(xx+150, yy+6);
  tft->println(items[2]);
}
