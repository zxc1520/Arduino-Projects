const int buzz = 7;
const int led = 8;
const int sensor = A7;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzz, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int res = analogRead(sensor);
  Serial.print("Intensitas cahaya: ");
  Serial.println(res);
  
  if(res >= 100){
    blink(100);
    tone(buzz, 100);
  } else {
    digitalWrite(led, LOW);
    noTone(buzz);
  }
}

void blink(int val) {
  digitalWrite(led, HIGH);
  delay(val);

  digitalWrite(led, LOW);
  delay(val);
}
