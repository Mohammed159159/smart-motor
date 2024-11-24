#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>
#include "pins.h"

class Motor
{

private:
    int motorPins[6] = {IN1, IN2, ENA};
    int speed = 0;
    int direction = 0;

public:
    Motor()
    {
        for (int i = 0; i < sizeof(motorPins) / sizeof(motorPins[0]); i++)
            pinMode(motorPins[i], OUTPUT);
    }
    int setSpeed(int new_speed);
    int setDirection(bool new_direction);
};

#endif