#include <Servo.h>
Servo myServo;
int pos =0;

void setup() {
 myServo.attach(9);
 Serial.begin(9600);
  
}

void loop() {
  for (pos=0;pos<90;pos++)
  { myServo.write(pos);
    Serial.println(pos);
    //delay(100);
  }
delay(3000);
for (pos=90;pos<=180;pos++)
  { myServo.write(pos);
    Serial.println(pos);

     
}
delay(3000);

for (pos=180;pos<=50;pos--)
  { myServo.write(pos);
    Serial.println(pos);

     
}
delay(3000);


}
