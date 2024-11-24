#include "led.h"

int LED::setIntensity(int new_intensity)
{
    //TODO: cap intensity between 0 and 255
    intensity = new_intensity;
    analogWrite(LED_PIN, intensity);
    
    return intensity;
}