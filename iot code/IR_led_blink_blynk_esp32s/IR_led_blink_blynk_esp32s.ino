#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space

char auth[] = "1c1ab1b3130640e68ac399c4afb3fc0e";

/* WiFi credentials */
char ssid[] = "techbeanssolution";
char pass[] = "techbeanssolution@indore";

/* HC-SR501 Motion Detector */
#define ledPin 13 
#define pirPin 12 // Input for HC-S501
int pirValue; // Place to store read PIR Value
int motionDetected = 0;

void setup()
{
  Serial.begin(115200);
  delay(10);
  Blynk.begin(auth, ssid, pass);
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  digitalWrite(ledPin, LOW);
}

void loop()
{
  getPirValue();
  Blynk.run();
}

/***************************************************
 * Get PIR data
 **************************************************/
void getPirValue(void)
{
  pirValue = digitalRead(pirPin);
  if (pirValue==LOW) 
  { 
    Serial.println("==> Motion detected");
   // Blynk.notify("T==> Motion detected");  
      Blynk.virtualWrite(V0,HIGH);
  }
  
   if (pirValue==HIGH) 
  { 
    Serial.println("==> Motion not detected");
   // Blynk.notify("T==> Motion  not detected");  
      Blynk.virtualWrite(V0,LOW);
  }
  //digitalWrite(ledPin, pirValue);
}
