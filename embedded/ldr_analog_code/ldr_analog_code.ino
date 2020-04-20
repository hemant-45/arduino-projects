#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);

 int sensor=A0;
int aa;
void setup() {

  
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("dark");
  lcd.setCursor(0,1);
  lcd.print("light");
  delay(100);
  lcd.clear();
  
  // put your setup code here, to run once:

}

void loop() {
  aa=analogRead(sensor);

  if (aa<200)
  {
  lcd.setCursor(0,0);
  lcd.print("light present");
  delay(100);}


  if (aa>200)
  {
  lcd.setCursor(0,0);
  lcd.print("light absent");
  delay(100);
  }
  // put your main code here, to run repeatedly:

}
