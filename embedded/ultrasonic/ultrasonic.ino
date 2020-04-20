
#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 5, 4, 3, 2);

int inputPin=8;  // connect digital I/O d4 to the ECHO/Rx Pin
int outputPin=9; // connect digital I/O d5 to the TRIG/TX Pin
void setup()
{
pinMode(inputPin, INPUT);
pinMode(outputPin, OUTPUT);
   lcd.begin(16, 2);
   lcd.setCursor(0, 0);
  lcd.print("ultrasonic");
  lcd.setCursor(0, 1);
  lcd.print("distance meter");
  delay(7000);            
  lcd.clear();
    Serial.begin(9600);
 }
void loop()
{
   digitalWrite(outputPin, LOW);  // send low pulse for 2μs
   delayMicroseconds(2);
   digitalWrite(outputPin, HIGH); // send high pulse for 10μs
   delayMicroseconds(10);
   digitalWrite(outputPin, LOW);  // back to low pulse
   int distance = pulseIn(inputPin, HIGH);  // read echo value
   int distance1= distance/29/2;  // in cm
    lcd.setCursor(0, 0);
    lcd.print("dis = ");
   lcd.print(distance1);
   lcd.print("cm ");
     Serial.println("dis = ");
   Serial.println(distance1);
   Serial.println("cm ");
   delay(500);
   lcd.clear();
    }
