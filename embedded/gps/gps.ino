int t,s,q=0;
unsigned char da8[500];

void setup() {
  Serial.begin(9600);
  Serial.flush();
  }

void loop() {
  if(Serial.available() )
    {
      Serial.println();
      if (Serial.read()=='R')
      {
        for(t=0; t<45; t++)
        {
          while(!Serial.available() )

          da8[t]=Serial.read();
        }
        //if(da8[18]=='4' && da8[19]=='1')
       {
        //Serial.println("techbiz");
        //delay(1000);
        //Serial.flush();
        }
        Serial.println("lt=");
        for (t=16; t<28; t++);
        {
          Serial.write(da8[t]);
        }
        Serial.println("lg=");
        for (t=29; t<43; t++);
        {
          Serial.write(da8[t]);
        }
        delay(1000);
        
        }
     }
  
  
 // put your main code here, to run repeatedly:

}
