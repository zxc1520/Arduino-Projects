int sensor = A7;
int leds[] = {8, 9, 10}; 

int res;
int out;

void setup() {

  for(int i=0; i<3; i++){
    pinMode(leds[i], OUTPUT);
  }

  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  res = analogRead(sensor);

  for(int i=0; i<3; i++) {
    digitalWrite(leds[i], HIGH);
    delay(res);

    digitalWrite(leds[i], LOW);
    delay(res);
  }

  Serial.print("Nilai sensor: ");
  Serial.println(res);

  delay(1);
  
}
