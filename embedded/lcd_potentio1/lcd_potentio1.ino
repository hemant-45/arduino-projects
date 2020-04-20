#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);

 int sensor=A0;
int aa;
void setup() {

  
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("gjhgjhg");
  lcd.setCursor(0,1);
  lcd.print("u");
  delay(1000);
  lcd.clear();
  
  // put your setup code here, to run once:

}

void loop() {
  aa=analogRead(sensor);

  
  lcd.setCursor(0,0);
  lcd.print(aa);
  delay(100);
   lcd.clear();
  // put your main code here, to run repeatedly:

}
