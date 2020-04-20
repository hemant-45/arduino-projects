char phone_no[]="7987641564";
int sw=6;
int sw1;
int t,s,q=0;

void setup() {
  pinMode(sw, INPUT);
  digitalWrite(sw, HIGH);

  Serial.begin(9600);

   // put your setup code here, to run once:
}

void loop()
{
  sw1=digitalRead(sw);
  int a=0;
if(sw1==LOW)
{

    SendMessage();
    
   }
     
     
    
     
     
   
       }  
         
     
       
  void SendMessage()
{

Serial.println("ATD");    
delay(2000);
//Serial.print("AT+CMGS=");
Serial.write(0x22);
Serial.print(phone_no); 
Serial.write(0x22);
Serial.write(0x0D);  // hex equivalent of Carraige return    
Serial.write(0x0A);  // hex equivalent of newline
delay(2000);
//serialSIM800.print("ACCIDENT vehicle is at google.com/maps/place/");
//Serial.println("track break please stop train");
delay(500);
Serial.println(char(26));//the ASCII code of the ctrl+z is 26
}
