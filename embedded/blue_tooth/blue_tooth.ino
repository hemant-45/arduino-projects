    					
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6,7);
int in1=8;

int t= 0;    // t for serial data xbee input variable, s for serial data gps input variable, r for ir sensor  variable
void setup()
{
pinMode(in1,OUTPUT);

digitalWrite(in1,HIGH);

 lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("HUMEN -- BOMB");
  lcd.setCursor(0, 1);
  lcd.print("DETECTER ROBOT");
  delay(1000);            
  lcd.clear();
   Serial.begin(9600);
}
void loop()
{
if (Serial.available() > 0) {
     
      t = Serial.read(); 
     
     delay(200);
       }
  
  
 if(t=='a')
  {
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("led on");
    Serial.println("led on");
  digitalWrite(in1,LOW);
 
 
  }
  
   if(t=='b')
  {lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("Led off");
  Serial.println("Led off");
  digitalWrite(in1,HIGH);
  
 
  }
   
  }
