/**
 * LED AUTOMATION
 * 
 * led ini akan hidup dan berkedip bila 
 */
int led = 8;
int sensor = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int res = analogRead(sensor);
  Serial.print("Nilai Sensor: ");
  Serial.println(res);

  if (res >= 55) {
    blink(100);
  } else {
    digitalWrite(led, LOW);
  }
}

void blink(int t) {
  digitalWrite(led, HIGH);
  delay(t);

  digitalWrite(led, LOW);
  delay(t);
}
