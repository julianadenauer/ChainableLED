#include "ChainableLED.h"

#define NUM_LEDS  1
ChainableLED leds(D4, D5, NUM_LEDS);

// This routine runs only once upon reset
void setup()
{
  leds.setColorRGB(0, 0, 0, 0);                 // turn down the LED
}

// This routine loops forever
void loop()
{
  leds.setColorRGB(0, 255, 0, 0);                 // make the LED red
  delay(500);
  leds.setColorRGB(0, 0, 255, 0);                 // make the LED green
  delay(500);
  leds.setColorRGB(0, 0, 0, 255);                 // make the LED blue
  delay(500);
}
