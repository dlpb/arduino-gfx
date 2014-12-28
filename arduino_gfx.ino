
#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"

#include "PanelContainer.h"
#include "Panel.h"
#include "TextPanel.h"
#include "GraphicPanel.h"
#include "StatusPanel.h"

// For better pressure precision, we need to know the resistance
// between X+ and X- Use any multimeter to read it
// For the one we're using, its 300 ohms across the X plate
// For the Adafruit shield, these are the default.
#define TFT_DC 9
#define TFT_CS 6

// Use hardware SPI (on Uno, #13, #12, #11) and the above for CS/DC
// If using the breakout, change pins as desired
//Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);



PanelContainer pc = PanelContainer(&tft);
TextPanel panel = TextPanel();
TextPanel panel2 = TextPanel();

StatusPanel statusPanel = StatusPanel();

void setup()
{
  Serial.begin(9600);
  Serial.println("Something starting");
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  Serial.println("something ending");
  pc.add_panel(&statusPanel);
  pc.add_panel(&panel);
  pc.add_panel(&panel2);
}
void loop()
{

  pc.render();

  delay(100);
//  tft.fillScreen(ILI9341_BLACK);
//  unsigned long start = micros();
//  tft.setCursor(0, 0);
//  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(1);
//  tft.println("Hello World!");

}
