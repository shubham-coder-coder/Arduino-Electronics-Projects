const int led = 9;
const int pot = A0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  int val = analogRead(pot);
  int brightness = map(val, 0, 1023, 0, 255);

  analogWrite(led, brightness);
  Serial.println(val);
}
