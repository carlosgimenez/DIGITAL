const int L1=10;
const int L2=9;
const int L3=8;
const int L4=7;
const int L5=6;
const int L6=5;
const int L7=4;
const int L8=3;
const int L9=2;
const int P1=11;
const int P2=12;
const int P3=13;

void setup()
{
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);
  pinMode(L9, OUTPUT);
  pinMode(P1, OUTPUT);
  pinMode(P2, OUTPUT);
  pinMode(P3, OUTPUT);
}

void loop()
{
  digitalWrite(P1,HIGH);
  digitalWrite(L1,HIGH);
  delay(150);
  
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  delay(150);
  
  digitalWrite(L2,LOW);
  digitalWrite(L3,HIGH);
  delay(150);
  
  digitalWrite(L3,LOW);
  digitalWrite(L4,HIGH);
  delay(150);
  
  digitalWrite(L4,LOW);
  digitalWrite(L5,HIGH);
  delay(150);
  
  digitalWrite(L5,LOW);
  digitalWrite(L6,HIGH);
  delay(150);
  
  digitalWrite(L6,LOW);
  digitalWrite(L7,HIGH);
  delay(150);
  
  digitalWrite(L7,LOW);
  digitalWrite(L8,HIGH);
  delay(150);
  
  digitalWrite(L8,LOW);
  digitalWrite(L9,HIGH);
  delay(150);
  
  digitalWrite(L9,LOW);
  digitalWrite(P1,LOW);
  delay(150);
  
  digitalWrite(P2,HIGH);
  digitalWrite(L1,HIGH);
  delay(150);
  
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  delay(150);
  
  digitalWrite(L2,LOW);
  digitalWrite(L3,HIGH);
  delay(150);
  
  digitalWrite(L3,LOW);
  digitalWrite(L4,HIGH);
  delay(150);
  
  digitalWrite(L4,LOW);
  digitalWrite(L5,HIGH);
  delay(150);
  digitalWrite(L5,LOW);
  digitalWrite(L6,HIGH);
  delay(150);
  
  digitalWrite(L6,LOW);
  digitalWrite(L7,HIGH);
  delay(150);
  digitalWrite(L7,LOW);
  digitalWrite(L8,HIGH);
  delay(150);
  
  digitalWrite(L8,LOW);
  digitalWrite(L9,HIGH);
  delay(150);
  
  digitalWrite(L9,LOW);
  digitalWrite(P2,LOW);
  delay(150);
  
  digitalWrite(P3,HIGH);
  digitalWrite(L1,HIGH);
  delay(150);
  
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  delay(150);
  
  digitalWrite(L2,LOW);
  digitalWrite(L3,HIGH);
  delay(150);
  
  digitalWrite(L3,LOW);
  digitalWrite(L4,HIGH);
  delay(150);
  
  digitalWrite(L4,LOW);
  digitalWrite(L5,HIGH);
  delay(150);
  
  digitalWrite(L5,LOW);
  digitalWrite(L6,HIGH);
  delay(150);
  
  digitalWrite(L6,LOW);
  digitalWrite(L7,HIGH);
  delay(150);
  
  digitalWrite(L7,LOW);
  digitalWrite(L8,HIGH);
  delay(150);
  
  digitalWrite(L8,LOW);
  digitalWrite(L9,HIGH);
  delay(150);
  
  digitalWrite(L9,LOW);
  digitalWrite(P3,LOW);
}
