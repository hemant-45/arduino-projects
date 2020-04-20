#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);

float tempc;
float tempf;
float vout;
const int sensor=A0;
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
  vout=analogRead(sensor);
  vout=vout*5000/1023;
  tempc=vout/10;
  tempf=(tempc*1.8)+32;
  
  lcd.setCursor(0,0);
  lcd.print(tempc);
  lcd.setCursor(0,1);
  lcd.print(tempf);
  delay(5000);
  
  
  lcd.clear();
  // put your main code here, to run repeatedly:

}
