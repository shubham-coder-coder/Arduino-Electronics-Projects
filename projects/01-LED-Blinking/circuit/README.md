# Circuit files

## Live Cirkit Designer project
[Open the LED Blinking circuit and simulate it in Cirkit Designer](https://app.cirkitdesigner.com/project/df286c8f-d438-49d3-bef1-302443497155).

## Static wiring diagram
See [led-blinking-wiring.svg](led-blinking-wiring.svg).

For an external LED, connect:

1. Arduino Uno D13 → 220 Ω resistor.
2. Other resistor terminal → LED anode (long leg).
3. LED cathode (short leg) → Arduino GND.

The Uno's built-in LED is also connected to D13 and can be used to test the sketch without an external LED.

## Verification
The shared project link and static diagram are provided for viewing. The simulation has not yet been independently verified here. Add a screenshot or native project export after testing if you want a copy stored in this repository.
