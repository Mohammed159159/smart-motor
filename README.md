# Ultrasonic Sensor Controlled DC Motor

## Overview

This Arduino project demonstrates how to control the speed of a DC motor based on the distance measured by an HC-SR04 ultrasonic sensor. Additionally, an LED is used to visually indicate the distance range.

## Components Required

Arduino board (Uno, Nano, etc.)
HC-SR04 Ultrasonic Sensor
DC Motor
Motor Driver (e.g., L298N)
Resistors (e.g., 10k ohm)
Jumper wires
Breadboard
9V battery and battery connector

## Circuit Diagram

[TO BE INSERTED: Insert a clear circuit diagram here, showing the connections between the Arduino, ultrasonic sensor, motor driver, and LED.]

## How it Works

- Distance Measurement: The ultrasonic sensor emits sound waves and measures the time taken for the echo to return, calculating the distance to the object.
- Motor Speed Control: The measured distance is used to adjust the motor's speed using Pulse-Width Modulation (PWM) on the enable pin of the motor driver.
- LED Indication: The LED's state indicates the distance range:
  - Higher intensity: Object is close.
  - Lower intensity: Object is far.

## Customization

- Distance Thresholds: Adjust the distance thresholds in the code to modify the speed and LED behavior at different distances.
- Motor Direction: Reverse the motor's direction by swapping the motor pins.
- Additional Sensors: Incorporate other sensors (e.g., temperature, light) to influence the motor speed or LED behavior.

## Note

- Ensure the motor driver is rated for the voltage and current requirements of your DC motor.
- Calibrate the ultrasonic sensor for accurate distance measurements.
- Experiment with different PWM values to fine-tune the motor speed.
- Enjoy your project!