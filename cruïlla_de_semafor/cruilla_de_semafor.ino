

const int led7=7;
const int led8=8;
const int led9=9;
const int led10=10;
const int led11=11;
const int led12=12;
int pausa = 500;


  
void setup()


{
  
pinMode (led7,OUTPUT);
pinMode (led8,OUTPUT); 
pinMode (led9,OUTPUT); 
pinMode (led10,OUTPUT); 
pinMode (led11,OUTPUT); 
pinMode (led12,OUTPUT); 
delay(500);

}


void loop()

{

digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,HIGH);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,HIGH);
delay(500);


digitalWrite(led7,HIGH);
digitalWrite(led8,LOW);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,HIGH);
delay(500);


digitalWrite(led7,LOW);
digitalWrite(led8,HIGH);
digitalWrite(led9,LOW);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,HIGH);
delay(500);



digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,HIGH);
digitalWrite(led10,HIGH);
digitalWrite(led11,LOW);
digitalWrite(led12,LOW);
delay(500);



digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,HIGH);
digitalWrite(led10,LOW);
digitalWrite(led11,HIGH);
digitalWrite(led12,LOW);
delay(500);


digitalWrite(led7,LOW);
digitalWrite(led8,LOW);
digitalWrite(led9,HIGH);
digitalWrite(led10,LOW);
digitalWrite(led11,LOW);
digitalWrite(led12,HIGH);
delay(500);

}













