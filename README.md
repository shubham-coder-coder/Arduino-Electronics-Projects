# Arduino & Electronics Projects

A hands-on learning repository documenting practical electronics, Arduino Uno, sensors, actuators, embedded C++, communication protocols, and beginner robotics projects.

## Goals

- Understand Arduino Uno pins and their alternate functions.
- Learn circuit design, component selection, and safe wiring.
- Practice Arduino C++ through small, testable projects.
- Explore analog and digital sensors, PWM, motors, and communication protocols.
- Build progressively more capable embedded and robotics projects.

## Development Setup

- **Board:** Arduino Uno R3 (ATmega328P)
- **Programming:** Arduino C/C++
- **Circuit design and simulation:** [Cirkit Designer](https://app.cirkitdesigner.com/)
- **Version control:** Git and GitHub

## Project Directory

Each project will contain its source code, circuit export, images, and its own documentation.

| No. | Project | Main concepts | Status |
|---:|---|---|---|
| 01 | [LED Blinking](projects/01-LED-Blinking/README.md) | Digital output, GPIO, resistor selection | Planned |
| 02 | Push Button LED | Digital input, pull-up/pull-down | Planned |
| 03 | Potentiometer Reading | Analog input, ADC | Planned |
| 04 | RGB LED Control | PWM, digital output | Planned |
| 05 | Ultrasonic Distance Measurement | Timing, sensor interfacing | Planned |
| 06 | Automatic Street Light | LDR, voltage divider, analog input | Planned |
| 07 | I2C LCD Display | I2C, SDA, SCL | Planned |
| 08 | RFID Access Control | SPI, RFID interfacing | Planned |
| 09 | Serial Communication | UART, RX, TX | Planned |
| 10 | DC Motor Speed Control | PWM, motor driver | Planned |
| 11 | Servo Position Control | Servo signals, positioning | Planned |
| 12 | Obstacle-Avoiding Robot | Sensors, motor driver, control logic | Planned |

> Project status will be updated only after the circuit, code, and test/simulation results are completed.

## Standard Project Structure

```text
projects/
└── NN-Project-Name/
    ├── circuit/    # Exported circuit files or diagrams
    ├── code/       # Arduino .ino source files
    ├── images/     # Circuit screenshots and results
    └── README.md   # Objective, components, wiring, code, results
```

## How to Reproduce a Project

1. Open the project's README and review the component list and wiring.
2. Open the circuit diagram or import the available Cirkit Designer project.
3. Review the Arduino sketch before running it.
4. Simulate or build the circuit and verify the expected behaviour.
5. Record any observations or changes in the project documentation.

## Safety Notes

- Check the Arduino Uno pin voltage and current limits before wiring.
- Use suitable current-limiting resistors with LEDs.
- Do not drive motors, relays, or other high-current loads directly from GPIO pins; use an appropriate driver.
- Check power-supply polarity and common-ground requirements before connecting modules.

## Progress

This repository is a learning log. New projects, circuit diagrams, code, and test evidence will be added as they are completed.

---
Built while learning electronics and embedded systems, one project at a time.
