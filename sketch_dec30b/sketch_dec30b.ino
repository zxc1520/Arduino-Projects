int sensor = A0;
int led = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int res = analogRead(sensor);
  Serial.print("Nilai sensor: ");
  Serial.println(res);

  if(res < 35) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
