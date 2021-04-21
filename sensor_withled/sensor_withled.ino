#define TRIG 8
#define ECHO 9

const int led = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIG, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  delayMicroseconds(10);

  int durasi, jarak;
  durasi = pulseIn(ECHO, HIGH);
  jarak = (durasi / 2) / 29.1;
  
  if (jarak <= 10) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  Serial.print("Jarak :");
  Serial.println(jarak);
}
