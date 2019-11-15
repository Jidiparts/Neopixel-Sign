// This code is adapted from Adafruit's Examples - Part of the NeoPixel Library

#include <Adafruit_NeoPixel.h> // Imports the libraries
#ifdef __AVR__
 #include <avr/power.h>
#endif


#define LED_PIN    6 // NeoPixels Connected to Pin 6 on the Arduino


#define LED_COUNT 60 // 60 = The number of NeoPixel LEDs connected to the Arduino

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);



// void setup() = Runs once on startup

void setup() {
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(70); // Set BRIGHTNESS to about 1/5 (max = 255)
}


// void loop() = runs in a loop until the reset button is pressed (or the power is cut)

void loop() {
  colorWipe(strip.Color(255,   0,   0), 40); // Set strip to Red
  colorWipe(strip.Color(140,   255,   0), 40); // Set strip to Yellow
  colorWipe(strip.Color(  0, 255,   0), 40); // Set strip to Green
  colorWipe(strip.Color(  0,   0, 255), 40); // Set strip to Blue
  colorWipe(strip.Color(86,   8,   204), 40); // Set strip to Purple
}

// Fill strip pixels one after another with a color. Strip is NOT cleared

void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, color);
    strip.show();
    delay(wait);                           //  Pause for a moment
  }
}
