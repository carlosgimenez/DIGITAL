




const int ledPin[] = {5, 6, 7, 8};  
int ledNum = 4;                      
int pausa = 1500;                    

void setup()
{
  for(int i = 0; i < ledNum; i++) 
  {
    pinMode(ledPin[i], OUTPUT);
  }
}


void loop()
{
  for(int i = 0; i < 16; i++)   
  {
    for(int j = 0; j < ledNum ; j++)   
    { 
      digitalWrite(ledPin[j], bitRead(i, j));
    }
    delay(pausa);                
  }
}


