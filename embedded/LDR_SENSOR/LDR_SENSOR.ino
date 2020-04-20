#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);

int sensor=8;
int aa;
int j;
void setup() {
  
 pinMode(8,INPUT);
  Serial.begin(9600);

  
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("LIGHT");
  lcd.setCursor(0,1);
  lcd.print("DARK");
  delay(1000);
  lcd.clear();
  
  // put your setup code here, to run once:

}

void loop() {
  aa=digitalRead(8);
  Serial.println(aa); 

   if (aa==LOW)
   
   {
   
   
   lcd.setCursor(0,0);
   lcd.print("LIGHT present");
   //delay(100);
   //lcd.clear();
   }
   

   
  else
   {
   lcd.setCursor(0,0);
   lcd.print("LIGHT absent");
   //delay(100);
   //lcd.clear();
   }
   
   
   
   //lcd.clear();
   
  // put your main code here, to run repeatedly:

}
