#include <IRremote.h>
int RECV_PIN = 11;
int p,q,r,t=0;
IRrecv irrecv(RECV_PIN);
decode_results results;
int a=8;
void setup()
{
 irrecv.enableIRIn(); // Start the receiver
 Serial.begin(9600);
 pinMode(8, OUTPUT);
}

void loop()
{
   
 if (irrecv.decode(&results)) {
    //irrecv.resume(); 
    t=results.value;
       Serial.println(t);
        delay(50);   
  irrecv.resume(); 
  }
    if( t == 31365 )
    {
      Serial.print("led on" );
      digitalWrite(8, HIGH);
     
     irrecv.resume(); 
     
    }

   if ( t == 6375)
   {
    Serial.print("led off");
    digitalWrite(8 , LOW);
   }

  delay(50);           
        
  
}
