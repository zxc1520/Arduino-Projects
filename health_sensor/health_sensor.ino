/**
 * Define sensor's (trigger and echo) pin
 * pin depends on your sketch
 */
#define trig 2
#define echo 3

/**
 * Define buzzer and led pin
 */
const int buzzer = 8;
const int led = 9;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  // communicate with serial monitor
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  delayMicroseconds(10);

  int durasi, jarak;
  durasi = pulseIn(echo, HIGH);
  jarak = (durasi / 2) / 29.1;

  if(jarak <= 25) {
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    tone(buzzer, 500);
  } else {
    digitalWrite(led, LOW);
    noTone(buzzer);
  }

  Serial.print("Jarak baca anda: ");
  Serial.print(jarak);
  Serial.println(" cm");
}
