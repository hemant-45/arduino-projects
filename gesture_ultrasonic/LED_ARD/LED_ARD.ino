




int value=0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN ,OUTPUT);
  digitalWrite(LED_BUILTIN , LOW);
  Serial.println("connection");// put your setup code here, to run once:

}

void loop() {
  while(Serial.available())
  {
    value=Serial.read();
  }

  if (value == '1')
  
  digitalWrite(LED_BUILTIN, HIGH);

  else if (value=='0')
  digitalWrite(LED_BUILTIN, LOW);
     
     
  
  // put your main code here, to run repeatedly:

}
