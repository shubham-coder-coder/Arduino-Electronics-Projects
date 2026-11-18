const int blue = 3;
const int green = 5;
const int red = 6;

void setup() {
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  analogWrite(blue, 169);
  analogWrite(green, 255);
  analogWrite(red, 255);
}
