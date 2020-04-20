#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);

void setup() {


  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print(")(*&");
  lcd.setCursor(0,1);
  lcd.print("*#uuu");
  delay(10000000);
  lcd.clear();
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
