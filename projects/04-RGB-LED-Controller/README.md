# Project 04: RGB LED Controller

## Objective
Control the red, green and blue channels of an RGB LED using Arduino PWM outputs.

## Components
- Arduino Uno
- 4-pin RGB LED
- Breadboard and jumper wires
- Three current-limiting resistors (one for each colour channel)

## Pin Connections
| RGB LED channel | Arduino pin |
|---|---:|
| Blue | D3 |
| Green | D5 |
| Red | D6 |
| Common pin | GND (for a common-cathode LED) |

The supplied circuit image shows the RGB LED connected to Arduino pins 3, 5 and 6. Confirm the LED's common-pin type and wiring against your actual component. Use a suitable series current-limiting resistor on each colour channel.

## Arduino Code
[Open the sketch](code/rgb_led_controller.ino).

## How It Works
- Pins 3, 5 and 6 support PWM output on the Arduino Uno.
- `analogWrite()` sets the PWM level for each colour channel.
- The current sketch sets blue to 169, green to 255 and red to 255 continuously, producing a fixed colour mix.

## Circuit Diagram
[View the wiring diagram](circuit/rgb-led-controller.svg).

## Cirkit Designer Simulation
[Open and simulate the RGB LED Controller](https://app.cirkitdesigner.com/project/4fc05191-242b-4a34-8449-ea78a323d0a6).

## Concepts Practised
- RGB LED colour channels
- PWM output
- `analogWrite()`
- Combining red, green and blue light
