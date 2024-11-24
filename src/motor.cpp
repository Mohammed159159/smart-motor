#include "motor.h"

int Motor::setSpeed(int new_speed)
{
    //TODO: cap speed between 0 and 255
    speed = new_speed;
    analogWrite(ENA, speed);
    return speed;
}

int Motor::setDirection(bool new_direction)
{
    direction = new_direction;
    digitalWrite(IN1, new_direction);
    digitalWrite(IN2, !new_direction);
    return direction;
}