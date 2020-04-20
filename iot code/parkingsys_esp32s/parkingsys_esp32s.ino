#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space

char auth[] = "1c1ab1b3130640e68ac399c4afb3fc0e";

/* WiFi credentials */
char ssid[] = "techbeanssolution";
char pass[] = "techbeanssolution@indore";

/* HC-SR501 Motion Detector */
#define ledPin1 13 
#define ledPin2 12
#define ledPin3 14
#define ledPin4 27
#define pirPin1 15
#define pirPin2 25
#define pirPin3 0
#define pirPin4 4
// Input for HC-S501
int pirValue1;
int pirValue2;
int pirValue3;
int pirValue4;// Place to store read PIR Value
int motionDetected = 0;

void setup()
{
  Serial.begin(115200);
  delay(10);
  Blynk.begin(auth, ssid, pass);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(pirPin1, INPUT);
  pinMode(pirPin2, INPUT);
  pinMode(pirPin3, INPUT);
  pinMode(pirPin4, INPUT);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
}

void loop()
{
  getPirValue1();
  //getPirValue2();
  //getPirValue3();
  //getPirValue4();
  Blynk.run();
}

/***************************************************
 * Get PIR data
 **************************************************/
void getPirValue1(void)
{
   pirValue1 = digitalRead(pirPin1);
   pirValue2 = digitalRead(pirPin2);
    pirValue3 = digitalRead(pirPin3);
   pirValue4 = digitalRead(pirPin4);
  if (pirValue1==LOW && pirValue2== HIGH && pirValue3 == HIGH && pirValue4 == HIGH) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,HIGH);
      Blynk.virtualWrite(V1,LOW);
      Blynk.virtualWrite(V2,LOW);
      Blynk.virtualWrite(V3,LOW);
  }
  if (pirValue1==LOW && pirValue2== LOW && pirValue3 == HIGH && pirValue4 == HIGH) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,HIGH);
      Blynk.virtualWrite(V1,HIGH);
      Blynk.virtualWrite(V2,LOW);
      Blynk.virtualWrite(V3,LOW);
  }
  
   if (pirValue1==LOW && pirValue2== LOW && pirValue3 == LOW && pirValue4 == HIGH) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,HIGH);
      Blynk.virtualWrite(V1,HIGH);
      Blynk.virtualWrite(V2,HIGH);
      Blynk.virtualWrite(V3,LOW);
  }

  if (pirValue1==LOW && pirValue2== LOW && pirValue3 == LOW && pirValue4 == LOW) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,HIGH);
      Blynk.virtualWrite(V1,HIGH);
      Blynk.virtualWrite(V2,HIGH);
      Blynk.virtualWrite(V3,HIGH);
  }

   
  
  if (pirValue1==HIGH && pirValue2== HIGH && pirValue3 == HIGH && pirValue4 == HIGH) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,LOW);
      Blynk.virtualWrite(V1,LOW);
      Blynk.virtualWrite(V2,LOW);
      Blynk.virtualWrite(V3,LOW);
  }

if (pirValue1==HIGH && pirValue2== LOW && pirValue3 == HIGH && pirValue4 == HIGH) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,LOW);
      Blynk.virtualWrite(V1,HIGH);
      Blynk.virtualWrite(V2,LOW);
      Blynk.virtualWrite(V3,LOW);
  }
if (pirValue1==HIGH && pirValue2== LOW && pirValue3 == LOW && pirValue4 == HIGH) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,LOW);
      Blynk.virtualWrite(V1,HIGH);
      Blynk.virtualWrite(V2,HIGH);
      Blynk.virtualWrite(V3,LOW);
  }



if (pirValue1==HIGH && pirValue2== LOW && pirValue3 == LOW && pirValue4 == LOW) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,LOW);
      Blynk.virtualWrite(V1,HIGH);
      Blynk.virtualWrite(V2,HIGH);
      Blynk.virtualWrite(V3,HIGH);
  }

  if (pirValue1==LOW && pirValue2== LOW && pirValue3 == HIGH && pirValue4 == LOW) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,HIGH);
      Blynk.virtualWrite(V1,HIGH);
      Blynk.virtualWrite(V2,LOW);
      Blynk.virtualWrite(V3,HIGH);
  }

  if (pirValue1==LOW && pirValue2== HIGH && pirValue3 == LOW && pirValue4 == LOW) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,HIGH);
      Blynk.virtualWrite(V1,LOW);
      Blynk.virtualWrite(V2,HIGH);
      Blynk.virtualWrite(V3,HIGH);
  }

  if (pirValue1==LOW && pirValue2== HIGH && pirValue3 == LOW && pirValue4 == HIGH) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,HIGH);
      Blynk.virtualWrite(V1,LOW);
      Blynk.virtualWrite(V2,HIGH);
      Blynk.virtualWrite(V3,LOW);
  }

if (pirValue1==HIGH && pirValue2== LOW && pirValue3 == HIGH && pirValue4 == LOW) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,LOW);
      Blynk.virtualWrite(V1,HIGH);
      Blynk.virtualWrite(V2,LOW);
      Blynk.virtualWrite(V3,HIGH);
  }

if (pirValue1==LOW && pirValue2== HIGH && pirValue3 == HIGH && pirValue4 == LOW) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,HIGH);
      Blynk.virtualWrite(V1,LOW);
      Blynk.virtualWrite(V2,LOW);
      Blynk.virtualWrite(V3,HIGH);
  }

if (pirValue1==HIGH && pirValue2== HIGH && pirValue3 == LOW && pirValue4 == LOW) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,LOW);
      Blynk.virtualWrite(V1,LOW);
      Blynk.virtualWrite(V2,HIGH);
      Blynk.virtualWrite(V3,HIGH);
  }

if (pirValue1==HIGH && pirValue2== HIGH && pirValue3 == LOW && pirValue4 == HIGH) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,LOW);
      Blynk.virtualWrite(V1,LOW);
      Blynk.virtualWrite(V2,HIGH);
      Blynk.virtualWrite(V3,LOW);
  }

if (pirValue1==HIGH && pirValue2== HIGH && pirValue3 == HIGH && pirValue4 == LOW) 
  { 
    //Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,LOW);
      Blynk.virtualWrite(V1,LOW);
      Blynk.virtualWrite(V2,LOW);
      Blynk.virtualWrite(V3,HIGH);
  }



  
}
