int sensor = A0;
int led = 7;

int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(sensor);
  int res = map(val, 0, 1023, 0, 255);

  analogWrite(led, res);
  
  Serial.print("Nilai sensor: ");
  Serial.println(val);
}
