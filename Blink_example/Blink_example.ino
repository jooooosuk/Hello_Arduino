void setup() {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

}

void loop() {
  digitalWrite(4,1);
  digitalWrite(5,1);
  digitalWrite(6,1);
  delay(3000);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  delay(3000);
}
