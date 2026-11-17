# Circuit files

## Wiring diagram
See [led-blinking-wiring.svg](led-blinking-wiring.svg).

For an external LED, connect:

1. Arduino Uno D13 → 220 Ω resistor.
2. Other resistor terminal → LED anode (long leg).
3. LED cathode (short leg) → Arduino GND.

The Uno's built-in LED is also connected to D13 and can be used to test the sketch without an external LED.

## Cirkit Designer project
The uploaded native `.ckt` file has not yet been added to this repository. Save/export the tested Cirkit Designer project into this folder when available.

## Verification
The diagram documents the intended wiring; it does not mean the simulation or hardware has been tested. Add a screenshot or native project export after testing.
