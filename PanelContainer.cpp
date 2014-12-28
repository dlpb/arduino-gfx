#import "PanelContainer.h"


PanelContainer::PanelContainer(Adafruit_ILI9341 *thetft)
{
  Serial.println("Something starting");
  tft = thetft;
  Serial.println("something ending");
}

int get_total_y(Panel **panels, int current)
{
  int total = 0;
  for(int i=0; i<current; i++)
  {
    total += panels[i] -> get_height();
  }
  return total;
}

void PanelContainer::add_panel(Panel *p)
{
  panels[current] = p;
  p->set_location(p->get_y(), get_total_y(panels, current));
  current +=1;
}

void PanelContainer::render()
{
//  
//  tft->fillScreen(ILI9341_BLACK);
//  unsigned long start = micros();
//  tft->setCursor(0, 0);
//  tft->setTextColor(ILI9341_WHITE);  tft->setTextSize(1);
//  tft->println("Welcome to the house of fun!");
  for(int i=0; i<MAX_PANELS; i++)
  {
    Serial.print("Panel "); Serial.println(i);
    panels[i]->render(tft);
  }
}

