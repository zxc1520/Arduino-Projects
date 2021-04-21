const int trig = 8;
const int echo = 9;

int durasi, jarak;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(2);
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  durasi = pulseIn(echo, HIGH);
  jarak = (durasi / 2) / 29.1;
  
  Serial.print("Jarak: ");
  Serial.println(jarak);
}
