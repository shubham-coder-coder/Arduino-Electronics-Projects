# Project 01: LED Blinking

## Objective
Blink an LED using Arduino Uno R3 digital pin 13.

## Components
- Arduino Uno R3
- External LED (optional when using the Uno's built-in LED)
- 220 Ω resistor for an external LED
- Breadboard and jumper wires (for an external LED)

## Circuit Connections
For the external LED:

| Component | Connection |
|---|---|
| Arduino D13 | One end of the 220 Ω resistor |
| Other end of resistor | LED anode (+, long leg) |
| LED cathode (−, short leg) | Arduino GND |

**Connection path:** D13 → 220 Ω resistor → LED anode; LED cathode → GND.

The resistor limits LED current. For an approximate 2 V red LED, current is (5 − 2) / 220 ≈ 13.6 mA.

The Arduino Uno's built-in LED is also connected to pin 13, so the sketch can be tested without an external LED.

## Circuit Diagram
- [Open the Cirkit Designer project and simulate it](https://app.cirkitdesigner.com/project/df286c8f-d438-49d3-bef1-302443497155)
- [Open the static wiring diagram](circuit/led-blinking-wiring.svg)

## Arduino Code
The sketch is in [code/led_blink.ino](code/led_blink.ino).

- LED ON: 1000 ms (1 second)
- LED OFF: 500 ms (0.5 second)

## Expected Result
The LED stays ON for 1 second and OFF for 0.5 second, continuously.

## Pin Concepts Practised
- Digital pin 13 as an output
- `pinMode()`
- `digitalWrite()`
- `delay()`
- LED polarity and current-limiting resistor

## Simulation and Verification
Open the shared [Cirkit Designer project](https://app.cirkitdesigner.com/project/df286c8f-d438-49d3-bef1-302443497155) to view and simulate the circuit.

- [ ] Circuit simulation completed
- [ ] Code compiled
- [ ] Simulation or hardware test result verified

*The project is not marked complete until it has been tested.*
