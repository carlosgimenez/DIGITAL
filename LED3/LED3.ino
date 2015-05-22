


void setup()
{
  pinMode(13, OUTPUT);     
  pinMode(12, OUTPUT);     
  pinMode(11, OUTPUT);     
  pinMode(l0, OUTPUT);    
  pinMode(9, OUTPUT);     
  pinMode(8, OUTPUT);     
  pinMode(7, OUTPUT);    
  pinMode(6, OUTPUT);    
}


void loop()
{
  digitalWrite(13, HIGH);    
  digitalWrite(l2, LOW);     
  digitalWrite(l1, LOW);    
  digitalWrite(l0, LOW);    
  digitalWrite(9, LOW);    
  digitalWrite(8, LOW);    
  digitalWrite(7, LOW);    
  digitalWrite(6, HIGH);     
  
  delay(500);                  
  
  digitalWrite(13, LOW);    
  digitalWrite(l2, HIGH);     
  digitalWrite(l1, LOW);    
  digitalWrite(l0, LOW);    
  digitalWrite(9, LOW);    
  digitalWrite(8, LOW);    
  digitalWrite(7, HIGH);    
  digitalWrite(6, LOW);     
  
  delay(500);                  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);   
  digitalWrite(led6, HIGH);     
  digitalWrite(led7, LOW);    
  delay(pausa);                
  
  digitalWrite(led0, LOW);     
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);     
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, LOW);     
  digitalWrite(led7, LOW);    
  
   delay(pausa);                  
  
   digitalWrite(led0, LOW);     
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);   
  digitalWrite(led4, HIGH);     
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);     
  digitalWrite(led7, LOW);  
  
 delay(pausa);  
  
}


