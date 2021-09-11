int a;
void setup() {
  //Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(8,OUTPUT);
 }

void loop() {
  a = digitalRead(2);
  if(a==HIGH){
    digitalWrite(8,HIGH);
  }
  if(a==LOW){
    digitalWrite(8,LOW);
  }
}
