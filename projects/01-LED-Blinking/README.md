# Project 01: LED Blinking

## Objective
Make an external LED turn ON and OFF repeatedly using an Arduino Uno R3 digital output pin.

## Components
- Arduino Uno R3
- 1 LED
- 1 × 220 Ω resistor (220–330 Ω is suitable for this example)
- Breadboard
- Jumper wires

## Circuit Connections

| Component | Connection |
|---|---|
| Arduino D8 | One end of the 220 Ω resistor |
| Other end of resistor | LED anode (+, long leg) |
| LED cathode (−, short leg) | Arduino GND |

**Connection path:** D8 → 220 Ω resistor → LED anode; LED cathode → GND.

The resistor is in series with the LED to limit current. With a 5 V output and an approximate 2 V red LED forward voltage, the current is about (5 − 2) / 220 = 13.6 mA.

## Arduino Code

The sketch is in [code/led_blink.ino](code/led_blink.ino).

1. Open the sketch in Arduino IDE.
2. Select **Arduino Uno** as the board.
3. Select the correct port.
4. Upload the sketch.
5. The LED connected to D8 should turn ON for one second and OFF for one second repeatedly.

## Expected Result
The external LED blinks at a steady rate: 1 second ON, 1 second OFF.

## Pin Concepts Practised
- D8 as a digital output
- `pinMode()`
- `digitalWrite()`
- `delay()`
- LED polarity and current-limiting resistor

## Circuit Simulation
Build the circuit in [Cirkit Designer](https://app.cirkitdesigner.com/) using the connections above. Add a screenshot or exported circuit file to this folder after testing.

## Verification Status
- [ ] Circuit created in Cirkit Designer
- [ ] Code compiled
- [ ] Simulation or hardware test completed
- [ ] Result screenshot added

*Do not mark the project complete until the circuit and code have been tested.*
