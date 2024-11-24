#include <Arduino.h>
#include "pins.h"
#include "motor.h"
#include "led.h"
#include "us_sensor.h"

LED led;
USSensor us_sensor;
Motor motor;

int distance = 0;

void setup()
{
    pinMode(ENA, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);

}

void loop()
{
    distance = us_sensor.getDistance();
    
    led.setIntensity(max(0, -distance * distance + 255));
    motor.setDirection(0);
    motor.setSpeed(min(255, distance * distance));

    delay(100);
}
