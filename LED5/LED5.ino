

const int ledPin[] = {5, 6, 7, 8};  
const int buttonPin = 2;           
boolean buttonEstat = LOW;          
int ledNum = 4;                 
int num = 0;                     


void setup()
{
  for(int i = 0; i < ledNum; i++) 
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);      
  for(int j = 0; j < ledNum ; j++)  
    { 
      digitalWrite(ledPin[j], 0);
    }
}


void loop()
{
  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat == HIGH)
  { 
    num = num + 1;              
    if (num == 16) num = 0;        
    for(int j = 0; j < ledNum ; j++) 
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    
  }
}


