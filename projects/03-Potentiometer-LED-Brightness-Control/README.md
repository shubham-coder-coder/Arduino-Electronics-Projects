# Project 03: Potentiometer LED Brightness Control

## Objective
Control the brightness of an LED using a potentiometer and Arduino Uno.

## Components
- Arduino Uno
- Potentiometer
- LED
- 220 Ω resistor
- Breadboard and jumper wires

## Pin Connections
- Potentiometer middle pin (wiper): Arduino A0
- Potentiometer outer pins: 5V and GND
- LED anode (+): Arduino D9 through a 220 Ω series resistor
- LED cathode (−): GND

**Note:** Arduino pin 9 supports PWM output, which is used to control LED brightness.

## Arduino Code
See [potentiometer_led_brightness.ino](code/potentiometer_led_brightness.ino).

## How It Works
- `analogRead(A0)` reads the potentiometer position as a value from 0 to 1023.
- `map()` converts that reading into a brightness value from 0 to 255.
- `analogWrite(9, brightness)` outputs a PWM signal to control LED brightness.
- `Serial.println(val)` displays the analog reading in the Serial Monitor.

## Cirkit Designer Simulation
[Open the Potentiometer LED Brightness Control project and simulate it](https://app.cirkitdesigner.com/project/361c601f-3bb2-4c74-afc8-c8f17a265814).

## Concepts Practised
- Analog input using `analogRead()`
- PWM output using `analogWrite()`
- Value conversion using `map()`
- Serial Monitor using `Serial.begin()` and `Serial.println()`
