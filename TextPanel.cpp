#include "TextPanel.h"
#include "Colours.h"

void TextPanel::render(Adafruit_ILI9341 *tft)
{
  int ww = get_width();
  int hh = get_height();
  int xx = get_x();
  int yy = get_y();
  
  Serial.print("Dimensions "); Serial.print(xx); Serial.print(","); Serial.print(yy); Serial.print("-"); Serial.print(ww); Serial.print(","); Serial.println(hh);
  tft->setCursor(xx+15, yy+15);
  tft->fillRect(xx, yy, ww, hh, WHITE);
  tft->drawRect(xx, yy, ww, hh, LIGHT_GREY);
  tft->setTextColor(DARK_GREY);  tft->setTextSize(2);
  tft->println(millis());
  
}

