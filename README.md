# arduino-servomotor

This project demonstrates how to control a servo motor and two LEDs using an Arduino board. The servo motor's position can be adjusted, and the LEDs can be turned on and off based on the Arduino's digital pins. When the servo motor is positioned between 0 to 90 degrees, LED1 is on and LED2 is off. When the servo motor is positioned between 90 to 180 degrees, LED1 is off and LED2 is on.

## Required Tools
- Arduino board (e.g., Arduino Uno)
- Servo motor
- 2 LEDs
- 2 resistors (220 ohms)
- Breadboard
- Jumper wires

## Wiring Instructions
1. Connect the servo motor's signal pin to digital pin 9 on the Arduino.
2. Connect the servo motor's power pin to the 5V pin on the Arduino.
3. Connect the servo motor's ground pin to the GND pin on the Arduino.
4. Connect LED1's anode (long leg) to digital pin 7 on the Arduino through a 220-ohm resistor.
5. Connect LED1's cathode (short leg) to the GND pin on the Arduino.
6. Connect LED2's anode (long leg) to digital pin 8 on the Arduino through a 220-ohm resistor.
7. Connect LED2's cathode (short leg) to the GND pin on the Arduino.
