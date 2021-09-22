//int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};
//int val;
//int val2;
long distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  /*
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  */
  /*
  Serial.print("sizeof(melody)는 : ");
  Serial.println(sizeof(melody));
  Serial.print("sizeof(melody[0])은 : ");
  Serial.println(sizeof(int));
  
  for(int i=0; i<sizeof(melody)/sizeof(melody[0]); i++){
    tone(8, melody[i], 250);
    delay(400);
    noTone(8);
  }
  */
  /*
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(12,OUTPUT);
  */
  /*
  pinMode(2,INPUT);
  */

  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  /*
  if(digitalRead(7)==HIGH){
    digitalWrite(11,HIGH);
  }else{
    digitalWrite(11,LOW);
    }
  if(digitalRead(8)==HIGH){
    digitalWrite(12,HIGH);
    }else{
      digitalWrite(12,LOW);
      }
  if(digitalRead(9)==HIGH){
    digitalWrite(13,HIGH);
    }else{
      digitalWrite(13,LOW);
      }
  */
  /*
  Serial.println(digitalRead(2));
  Serial.println(digitalRead(3));
  Serial.println(digitalRead(4));
  if(digitalRead(2)==HIGH && digitalRead(3)==LOW && digitalRead(4) == LOW){
    tone(12, melody[0], 250);
    //delay(400);
    //noTone(12);
    }
  if(digitalRead(2)==LOW && digitalRead(3)==HIGH && digitalRead(4) == LOW){
    tone(12, melody[1], 250);
    //delay(400);
    //noTone(12);
    }
  if(digitalRead(2)==LOW && digitalRead(3)==LOW && digitalRead(4) == HIGH){
    tone(12, melody[2], 250);
    //delay(400);
    //noTone(12);
    }  
  */
  /*
  val = analogRead(A0);
  //Serial.println(val);
  val2 = map(val,0,1023,255,0); //매핑함. 0~1023을 255~0으로 매핑함.
  analogWrite(A1,val2);
  Serial.println(val2);
  */
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);
  distance = pulseIn(3,HIGH)/58.2;
  Serial.println(distance);
  if(distance==0){
    return;
    }
  if(distance<10){
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    }else if(distance<20){
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      }else{
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        }
   delay(100);
} 
