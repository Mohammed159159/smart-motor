#ifndef LED_H
#define LED_H

#include <Arduino.h>
#include "pins.h"

class LED
{
private:
    int intensity = 0;
public:
    LED()
    {
        pinMode(LED_PIN, OUTPUT);
    }
    int setIntensity(int new_intensity);
};

#endif
