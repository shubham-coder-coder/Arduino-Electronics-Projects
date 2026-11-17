# Project 02: Push Button Controlled LED

## Objective
Control an LED using a push button with an Arduino Uno.

## Arduino Code
See [push_button_led.ino](code/push_button_led.ino).

## Pin Connections
- Push button signal: Arduino digital pin 2
- LED output: Arduino digital pin 13 (the Uno's built-in LED can be used)
- Use a 10 kΩ pull-down resistor between pin 2 and GND.
- Connect the push button between 5V and pin 2.
- If using an external LED, connect it in series with a 220 Ω resistor between pin 13 and GND, observing LED polarity.

## How It Works
- When the button is pressed, pin 2 reads HIGH and the LED turns ON.
- When the button is released, the pull-down resistor holds pin 2 LOW and the LED turns OFF.

## Cirkit Designer Simulation
[Open the Push Button Controlled LED circuit and simulate it](https://app.cirkitdesigner.com/project/610ea327-8c2b-49bb-b7d1-bfa96832540d).

## Verification
- [ ] Open the shared Cirkit Designer project
- [ ] Run the simulation
- [ ] Verify the LED responds to the push button
- [ ] Verify the physical circuit, if built

*The project is not marked complete until it has been tested.*

## Understanding the 4-Pin Push Button

For a standard 4-pin tactile push button:

- Legs 1 and 2 are internally connected as one pair.
- Legs 3 and 4 are internally connected as the other pair.
- The two pairs connect to each other only while the button is pressed.

Connect 5V to one leg from the first pair and Arduino D2 to one leg from the second pair. These four combinations work:

| 5V connection | D2 connection |
|---|---|
| Leg 1 | Leg 3 |
| Leg 1 | Leg 4 |
| Leg 2 | Leg 3 |
| Leg 2 | Leg 4 |

**Important:** Do not connect 5V and D2 to legs from the same internally connected pair. They would already be electrically connected, so pressing the button would not provide the intended switching action.

Use a 10 kΩ pull-down resistor between D2 and GND so the input reads LOW when the button is released.
