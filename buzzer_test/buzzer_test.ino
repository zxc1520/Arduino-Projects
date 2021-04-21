const int buzz = 8;
const int led = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzz, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  DO();
}

void DO() {
  tone(buzz, 294);
  digitalWrite(led, HIGH);
  delay(500);
}
