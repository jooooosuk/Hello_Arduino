const int TriggerPin = 8; 
const int EchoPin = 9;
void setup() {
  pinMode(TriggerPin,OUTPUT);
  pinMode(EchoPin,INPUT);
  Serial.begin(9600);
 }

void loop() {
  digitalWrite(TriggerPin,LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin,LOW);
  long Duration = pulseIn(9,HIGH);
  long Distance_mm = Duration/5.8;
  Serial.print("Distance = "  );
  Serial.print(Distance_mm);
  Serial.println("mm");
  delay(1000);
}
