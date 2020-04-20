#include<LiquidCrystal.h>
#include <Servo.h>
LiquidCrystal lcd(2,3,4,5,6,7);
Servo myServo;
unsigned char  da8[24];
unsigned int a =300; 
unsigned int b =300; 
unsigned int c =300;
int SW1=11;
int SW2=12;
int SW3=13;

int e;
int f;
int g;
int s,t=0;
int buzz=10;
int pos =0;
void setup() 
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("WELCOME TO TOLL");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("PUNCH YOUR CARD");
  delay(2000);
  lcd.clear();
  myServo.attach(9);
  pinMode(10,OUTPUT);
  pinMode(11,INPUT);

}
void loop() {
  
  while(Serial.available())
      {
      da8[t] = Serial.read(); 
      Serial.write(da8[t]);
      delay(50); 
   t++;
      }
 
      t=0;
     
    
         if(da8[9] == '5' && da8[10] == 'B' && da8[11] == '5')
      {
        if(a>0)
      {
        for (pos=0;pos<90;pos++)
      
      { 
        myServo.write(pos);
       //Serial.println(pos);
        
        delay(10);
       }
       } 
      Serial.println("HEMANT ");
      lcd.setCursor(0,0);
       lcd.print("hemant");
       lcd.setCursor(0,1);
       lcd.print("DEDUCTION=Rs.100");
       delay(2000);
    a=a-100; 
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.print("remaining balance");
       lcd.setCursor(0,1);
       lcd.print(a);     
        delay(2000);
  lcd.clear();
     Serial.println(a);
     
      
          
      // Serial.println(a);
       
  da8[9]=0;da8[10]=0;da8[11]=0;
      
       
       Serial.flush();
      
      
        if(a==0)
     {
      digitalWrite(buzz,HIGH);
      delay(200);
      digitalWrite(buzz,LOW);
      lcd.setCursor(0,0);
      lcd.print("press button");
      delay(2000);
      lcd.clear();
      e=digitalRead(SW1);
      f=digitalRead(SW2);
      g=digitalRead(SW3);
      if(e==LOW)
      {
        a=a+300;
      lcd.setCursor(0,0);
      lcd.print("RS.300 recharged");
      delay(2000);
      lcd.clear();
      Serial.println(a);}
      if(f==LOW)
      {
        a=a+200;
      
      lcd.setCursor(0,0);
      lcd.print("RS.200 recharged");
      delay(2000);
      lcd.clear();
      Serial.println(a);
      }
      if(g==LOW)
      {
        a=a+100;
      lcd.setCursor(0,0);
      lcd.print("RS.100 recharged");
      delay(2000);
      lcd.clear();
      Serial.println(a);
      }
     }
}
}
      

    
      /*  if(da8[9] == '7' && da8[10] == '5' && da8[11] == '4')
      {//b=b-100;
       if(b>0)
      {for (pos=0;pos<90;pos++)
      { myServo.write(pos);
       //Serial.println(pos);
        
        delay(10);
       }} 
      Serial.println("kapil ");
      lcd.setCursor(0,0);
       lcd.print("kapil ");
       lcd.setCursor(0,1);
       lcd.print("DEDUCTION=Rs.100");
       delay(1500);
       b=b-100;
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.print("remaining balance");
       lcd.setCursor(0,1);
       lcd.print(b);     
        delay(1500);
  lcd.clear();   
  da8[9]=0;da8[10]=0;da8[11]=0;
      Serial.flush();
      }
        else if(b==0)
     {
      digitalWrite(buzz,HIGH);
      delay(200);
      digitalWrite(buzz,LOW);
      lcd.setCursor(0,0);
      lcd.print("press button");
      delay(2000);
      lcd.clear();
      e=digitalRead(SW1);
      f=digitalRead(SW2);
      g=digitalRead(SW3);
      if(e==LOW)
      {b=b+300;
      lcd.setCursor(0,0);
      lcd.print("RS.300 recharged");
      delay(2000);
      lcd.clear();
      Serial.println(b);}
      if(f==LOW)
      {b=b+200;
      lcd.setCursor(0,0);
      lcd.print("RS.200 recharged");
      delay(2000);
      lcd.clear();
      Serial.println(b);
      }
      if(g==LOW)
      {b=b+100;
      lcd.setCursor(0,0);
      lcd.print("RS.100 recharged");
      delay(2000);
      lcd.clear();
      Serial.println(b);
      }}

       
         if(da8[9] == 'C' && da8[10] == 'B' && da8[11] == '7')
      {//c=c-10;
       if(c>0)
      {for (pos=0;pos<90;pos++)
      { myServo.write(pos);
       //Serial.println(pos);
        
        delay(10);
       }} 
      Serial.println("Mr. Khan");
      lcd.setCursor(0,0);
       lcd.print("Mr. Khan");
       lcd.setCursor(0,1);
       lcd.print("DEDUCTION=Rs.10");
       delay(1500);
       c=c-100;
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.print("remaining balance");
       lcd.setCursor(0,1);
       lcd.print(c);     
        delay(1500);
  lcd.clear();   
  da8[9]=0;da8[10]=0;da8[11]=0;
      Serial.flush();
              else if(c==0)
     {
      digitalWrite(buzz,HIGH);
      delay(200);
      digitalWrite(buzz,LOW);
      lcd.setCursor(0,0);
      lcd.print("press button");
      delay(2000);
      lcd.clear();
      e=digitalRead(SW1);
      f=digitalRead(SW2);
      g=digitalRead(SW3);
      if(e==LOW)
      {c=c+300;
      lcd.setCursor(0,0);
      lcd.print("RS.300 recharged");
      delay(2000);
      lcd.clear();
      Serial.println(c);}
      if(f==LOW)
      {c=c+200;
      lcd.setCursor(0,0);
      lcd.print("RS.200 recharged");
      delay(2000);
      lcd.clear();
      Serial.println(c);
      }
      if(g==LOW)
      {c=c+100;
      lcd.setCursor(0,0);
      lcd.print("RS.100 recharged");
      delay(2000);
      lcd.clear();
      Serial.println(c);
      }
     }}}*/
       
       
       
