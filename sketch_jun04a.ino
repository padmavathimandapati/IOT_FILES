void setup() {
  // put your setup code here, to run once:
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(D0,HIGH);
digitalWrite(D1,HIGH);
digitalWrite(D2,HIGH);
delay(1000);
digitalWrite(D0,LOW);
digitalWrite(D1,LOW);
digitalWrite(D2,LOW);
delay(1000);
}
