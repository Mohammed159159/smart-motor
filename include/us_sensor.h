#ifndef US_SENSOR_H
#define US_SENSOR_H

#include <Arduino.h>
#include "pins.h"

class USSensor
{
private:
    int distance = 0;
    long duration = 0;
public:
    USSensor()
    {
        pinMode(TRIG, OUTPUT);
        pinMode(ECHO, INPUT);
    }
    int getDistance();
};

#endif