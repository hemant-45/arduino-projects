 int a,b,c,d,e=0;
 int s,t=0;
 unsigned char  da8[24];
 void setup() 
 {
   

  Serial1.begin(9600);
  pinMode(13, OUTPUT);
 

 }
  
  void loop()
{
 

  
while(Serial1.available())
      {
      da8[t] = Serial1.read(); 
      Serial1.write(da8[t]);
      delay(50); 
   t++;
      }
 
      t=0;
     
    
         if(da8[9] == 'F' && da8[10] == 'B' && da8[11] == '9')
      {
     
      //Serial.println("parasar ji ");
      digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(13, LOW);
      delay(400);
      da8[9]=0;da8[10]=0;da8[11]=0;
      Serial1.flush();
       }
              if(da8[9] == 'D' && da8[10] == '1' && da8[11] == 'A')
      {
    
      digitalWrite(13, HIGH);
      

      delay(100);
      digitalWrite(13, LOW);
      delay(300);
                 
     
      da8[9]=0;da8[10]=0;da8[11]=0;
      Serial.flush();
       }
               if(da8[9] == 'F' && da8[10] == 'B' && da8[11] == '8')
      {
      
      Serial.println("BANDARIYA");
      delay(5000);            
   
      da8[9]=0;da8[10]=0;da8[11]=0;
      Serial.flush();
       }
           if(da8[9] == 'C' && da8[10] == 'B' && da8[11] == '7')
      {
      
      Serial.println("Madhaw");
    
      da8[9]=0;da8[10]=0;da8[11]=0;
      Serial.flush();
       }
            if(da8[9] == '3' && da8[10] == '6' && da8[11] == '6')
      {
     
      Serial.println("Pankit");
      delay(5000);            
    
      da8[9]=0;da8[10]=0;da8[11]=0;
      Serial.flush();
       }
            if(da8[9] == '8' && da8[10] == 'F' && da8[11] == '4')
      {
     
      Serial.println("Pankit");
      delay(5000);            
    
      da8[9]=0;da8[10]=0;da8[11]=0;
      Serial.flush();
       }
      } 
    

      
  
 
  

    
  
