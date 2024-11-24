#include "us_sensor.h"

int USSensor::getDistance()
{
    digitalWrite(TRIG, LOW);
    delayMicroseconds(10);

    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    
    digitalWrite(TRIG, LOW);

    duration = pulseIn(ECHO, HIGH);

    distance = duration * 0.034 / 2;
}