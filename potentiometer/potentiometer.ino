void setup() {
  pinMode(5,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int n = analogRead(0); //포텐셔미터 값 read(0~1023)
  Serial.println(n);
  digitalWrite(5,n/4); //포텐셔미터로 읽은 값을 4로 나눠서 write해준다. (0~255)
  digitalWrite(6,n/4); //포텐셔미터로 읽은 값을 4로 나눠서 write해준다. (0~255)
 
  delay(30);
}
