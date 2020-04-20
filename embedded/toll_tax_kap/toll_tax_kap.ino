

#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
#include <Servo.h> 
 LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
 int a=200;
 int b=200;
 int c=200;
 //int d=200;
 int x,y,z,s,t=0;

Servo s1; 
 int sw1 = 11;
 int sw2 = 12;
 int sw3 = 13; 

 int osw1 = 0;
 int osw2 = 0;
 int osw3 = 0;

 int pos = 0; 

 int bz=10;
 

 unsigned char  da8[12];

 void setup() {

   s1.attach(9);
 
   
  //    s1.write(90);             
    //delay(15);
  

    pinMode(sw1, INPUT);
   pinMode(sw2, INPUT);
   pinMode(sw3, INPUT);
   digitalWrite(sw1,HIGH);
  digitalWrite(sw2,HIGH);
  digitalWrite(sw3,HIGH);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("WELCOME TO");
  lcd.setCursor(0, 1);
  lcd.print("Dewas Toll Plaza");
  delay(5000);            
  lcd.clear();
       

  Serial.begin(9600);
   
  
 }
  
  void loop()
{ 

//  osw1 = digitalRead(sw1);
//  osw2 = digitalRead(sw2);
//  osw3 = digitalRead(sw3);
//
//    if(osw1 == LOW)  
//     {
//     
//     lcd.setCursor(0, 1);
//     lcd.print("bal=");
//     x = 500;
//    
//     
//        //d = 50;
//     lcd.print(x); 
//     delay(1000);
//      lcd.clear();
//  } 
//  
//  if(osw2 == LOW)  
//    { 
//   
//    lcd.setCursor(0, 1);
//    lcd.print("bal=");
//      y = 700;
//    lcd.print(y); 
//    delay(1000);
//     lcd.clear();
//  } 
//  
//  if(osw3 == LOW)  
//    {
//    
//    lcd.setCursor(0, 1);
//    lcd.print("bal=");
//    z = 1000;
//    lcd.print(z); 
//    delay(1000);
//     lcd.clear();
//  }

  while(Serial.available())
      {
      da8[t] = Serial.read(); 
      lcd.write(da8[t]);
      delay(50); 
      t++;
      }
      t=0;
       if(da8[9] == '5' && da8[10] == 'B' && da8[11] == '5')
      {
        a=a-100;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("vhcl no. SJ9525");
        lcd.setCursor(0, 1);
        lcd.print("rbal=");
        lcd.print(a);
        
        delay(2000);
        lcd.clear();
        
        if(a>=0)
        {
        lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(4000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(4000);
      lcd.clear();
        }
          else
        {
        lcd.setCursor(0,0);
        lcd.print("insuffiecent");
        lcd.setCursor(0,1);
      
        delay(4000);
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("500  700  1000");
        
        
       while(1)
        {
  osw1 = digitalRead(sw1);
  osw2 = digitalRead(sw2);
  osw3 = digitalRead(sw3);

    if(osw1 == LOW)  
     {
     
     lcd.setCursor(0, 1);
     lcd.print("bal=");
     x = 500;
    
     a=a+x;
     //a=a-100;
        //d = 50;
     lcd.print("rech done :" );
     lcd.setCursor(0,1);
     lcd.print(a); 
     delay(1000);
      lcd.clear();
      lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(2000);
      lcd.clear();
      break;
      
  } 
  
  if(osw2 == LOW)  
    { 
   
    lcd.setCursor(0, 1);
    lcd.print("bal=");
      y = 700;
      a=a+y;
      //a=a-100;
    lcd.print(a); 
    delay(1000);
     lcd.clear();
      lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(2000);
      lcd.clear();
     break;
  } 
  
  if(osw3 == LOW)  
    {
    
    lcd.setCursor(0, 1);
    lcd.print("bal=");
    z = 1000;
    a=a+z;
    a=a-100;
    lcd.print(a); 
    delay(1000);
     lcd.clear();
      lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(2000);
      lcd.clear();
     break;
  }
        }
        
        }
      da8[t] =  0;
      da8[9] =  0;
      da8[10] =  0;
      da8[11] =  0;
    t=0;
  
    delay(1000);
   
    
   
   }
          if(da8[9] == '7' && da8[10] == '5' && da8[11] == '4')
      {b=b-100;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("vhcl=kapil");
        lcd.setCursor(0, 1);
        lcd.print("rbal=");
        lcd.print(b);
    
        delay(2000);
        lcd.clear();
        if(b>=0)
        {
        lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(2000);
      lcd.clear();
        }
          else
        {
        lcd.setCursor(0,0);
        lcd.print("insuffiecent");
        lcd.setCursor(0,1);
        lcd.print("balance");
        
        delay(4000);
        lcd.clear();
         lcd.setCursor(0,0);
        lcd.print("500  700  1000");
        
        
           while(1)
        {
  osw1 = digitalRead(sw1);
  osw2 = digitalRead(sw2);
  osw3 = digitalRead(sw3);

    if(osw1 == LOW)  
     {
     
     lcd.setCursor(0, 1);
     lcd.print("bal=");
     x = 500;
    
     b=b+x;
     //b=b-100;
        //d = 50;
     lcd.print(b); 
     delay(1000);
      lcd.clear();
       lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(2000);
      lcd.clear();
      break;
  } 
  
  if(osw2 == LOW)  
    { 
   
    lcd.setCursor(0, 1);
    lcd.print("bal=");
      y = 700;
      b=b+y;
      //b=b-100;
    lcd.print(b); 
    delay(1000);
     lcd.clear();
      lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(2000);
      lcd.clear();
     break;
  } 
  
  if(osw3 == LOW)  
    {
    
    lcd.setCursor(0, 1);
    lcd.print("bal=");
    z = 1000;
    b=b+z;
    //b=b-100;
    lcd.print(b); 
    delay(1000);
     lcd.clear();
      lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(2000);
      lcd.clear();
     break;
  }
        }   }
      da8[t] =  0;
      da8[9] =  0;
      da8[10] =  0;
      da8[11] =  0;
    t=0;

    delay(1000);
   
    
   
   }
          if(da8[9] == 'C' && da8[10] == 'B' && da8[11] == '7')
      {c=c-100;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("vhcl saifi");
        lcd.setCursor(0, 1);
        lcd.print("rbal=");
        lcd.print(c);
       
        delay(2000);
        lcd.clear();
        if(c>=0)
        {
        lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(2000);
      lcd.clear();
        }
         else
        {
        lcd.setCursor(0,0);
        lcd.print("insuffiecent");
        lcd.setCursor(0,1);
        lcd.print("balance");
        Serial.println("insuffiecent");
        Serial.println("balance");
        delay(4000);
        lcd.clear();
         lcd.setCursor(0,0);
        lcd.print("500  700  1000");
        
        
           while(1)
        {
  osw1 = digitalRead(sw1);
  osw2 = digitalRead(sw2);
  osw3 = digitalRead(sw3);

    if(osw1 == LOW)  
     {
     
     lcd.setCursor(0, 1);
     lcd.print("bal=");
     x = 500;
    
     c=c+x;
     //c=c-100;
        //d = 50;
     lcd.print(c); 
     delay(1000);
      lcd.clear();
       lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(2000);
      lcd.clear();
      break;
  } 
  
  if(osw2 == LOW)  
    { 
   
    lcd.setCursor(0, 1);
    lcd.print("bal=");
      y = 700;
      c=c+y;
      //c=c-100;
    lcd.print(c); 
    delay(1000);
     lcd.clear();
      lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(2000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(2000);
      lcd.clear();
     break;
  } 
  
  if(osw3 == LOW)  
    {
    
    lcd.setCursor(0, 1);
    lcd.print("bal=");
    z = 1000;
    c=c+z;
    //c=c-100;
    lcd.print(c); 
    delay(1000);
     lcd.clear();
     break;
  }}
        }
      da8[t] =  0;
      da8[9] =  0;
      da8[10] =  0;
      da8[11] =  0;
    t=0;
   
    delay(1000);
   
    
   
   }
/*          if(da8[9] == '4' && da8[10] == 'F' && da8[11] == '8')
      {d=d-150;
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("vhcl no. BK2565");
        lcd.setCursor(0, 1);
        lcd.print("rbal=");
        lcd.print(d);
      
        delay(2000);
        lcd.clear();
        if(d>=150)
        {
        lcd.setCursor(0,0);
        lcd.print("gate  OPEN");
        s1.write(10);
     
      
      delay(4000);
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("gate CLOSE");
      s1.write(170);
      delay(4000);
      lcd.clear();
        }
         else
        {
        lcd.setCursor(0,0);
        lcd.print("insuffiecent");
        lcd.setCursor(0,1);
        lcd.print("balance");
        
        delay(4000);
        lcd.clear();
         lcd.setCursor(0,0);
        lcd.print("500  700  1000");
        
        }
           while(1)
        {
  osw1 = digitalRead(sw1);
  osw2 = digitalRead(sw2);
  osw3 = digitalRead(sw3);

    if(osw1 == LOW)  
     {
     
     lcd.setCursor(0, 1);
     lcd.print("bal=");
     x = 500;
    
     d=d+x;
     d=d-150;
        //d = 50;
     lcd.print(d); 
     delay(1000);
      lcd.clear();
      break;
  } 
  
  if(osw2 == LOW)  
    { 
   
    lcd.setCursor(0, 1);
    lcd.print("bal=");
      y = 700;
      d=d+y;
      d=d-150;
    lcd.print(d); 
    delay(1000);
     lcd.clear();
     break;
  } 
  
  if(osw3 == LOW)  
    {
    
    lcd.setCursor(0, 1);
    lcd.print("bal=");
    z = 1000;
    d=d+z;
    d=d-150;
    lcd.print(d); 
    delay(1000);
     lcd.clear();
     break;
  }
        }
      da8[t] =  0;
      da8[9] =  0;
      da8[10] =  0;
      da8[11] =  0;
    t=0;
   
    delay(1000);
   
    
   
   }
  */
   delay(2000);
   lcd.clear();
     }

      
         
