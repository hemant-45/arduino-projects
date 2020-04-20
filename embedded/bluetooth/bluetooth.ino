#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6,7);
int LED=8;
int ai,c,d,e=0;
char a,b;


void setup() {

  pinMode(8,OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("BLUETOOTH START");
  lcd.setCursor(0,1);
  lcd.print("HC-05");
  delay(1000);
  lcd.clear();
  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(LED, LOW);
  
  if(Serial.available()>0)
  {
    ai=Serial.read();
  }
    if (ai=='a')
    {  digitalWrite(LED, HIGH);
      lcd.setCursor(0,0);
      lcd.print("led on");
      Serial.println("led on");
      }
      if (ai=='b')
    { 
      digitalWrite(LED, LOW);
      lcd.setCursor(0,0);
      lcd.print("led on");
      Serial.println("led on");
      }
      
    
  
  // put your main code here, to run repeatedly:

}
