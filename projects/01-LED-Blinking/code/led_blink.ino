/*
  Project 01: LED Blinking
  Board: Arduino Uno R3
  LED: External LED connected to D8 through a 220 ohm resistor
*/

const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn LED ON
  delay(1000);                 // Wait 1 second

  digitalWrite(ledPin, LOW);   // Turn LED OFF
  delay(1000);                 // Wait 1 second
}
