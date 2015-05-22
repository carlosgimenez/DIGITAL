const int segA = 5;          
const int segB = 6;          
const int segC = 7;          
const int segD = 8;          
const int segE = 9;          
const int segF = 10;        
const int segG = 11;         
int pausa = 1000;            



void setup()
{
  pinMode(segA, OUTPUT);    
  pinMode(segB, OUTPUT);     
  pinMode(segC, OUTPUT);     
  pinMode(segD, OUTPUT);     
  pinMode(segE, OUTPUT);    
  pinMode(segF, OUTPUT);    
  pinMode(segG, OUTPUT);     
  
  digitalWrite(segA, HIGH);   
  digitalWrite(segB, HIGH);     
  digitalWrite(segC, HIGH);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, LOW);    

  delay(pausa);               
}


void loop()
{
  digitalWrite(segA, LOW);     
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW);     
  digitalWrite(segF, LOW);     
  
  delay(pausa);            
  
  digitalWrite(segA, HIGH);          
  digitalWrite(segC, LOW);     
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH);     
  digitalWrite(segG, HIGH);   
    
  delay(pausa);             
  
  digitalWrite(segC, HIGH);    
  digitalWrite(segE, LOW);    
    
  delay(pausa);            
  
  digitalWrite(segA, LOW);      
  digitalWrite(segD, LOW);     
  digitalWrite(segF, HIGH); 
      
  delay(pausa);               
  
  digitalWrite(segA, HIGH);  
  digitalWrite(segB, LOW); 
  digitalWrite(segD, HIGH);   
        
  delay(pausa);              
  
  digitalWrite(segA, LOW);          
  digitalWrite(segE, HIGH);   
          
  delay(pausa);           
  
  digitalWrite(segA, HIGH);   
  digitalWrite(segB, HIGH);  
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);    
            
  delay(pausa);               
  
  digitalWrite(segD, HIGH);   
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);   
              
  delay(pausa);              
  
  digitalWrite(segD, LOW);  
  digitalWrite(segE, LOW);  
                
  delay(pausa);              
  
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH);    
  digitalWrite(segG, LOW);     

  delay(pausa);              
}

