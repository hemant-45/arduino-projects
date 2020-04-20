
int LED=3;
int ir=4;
int entry=0;
int ir1;
//int total=entry+exit1;

void setup() {

  pinMode(LED,OUTPUT);
  pinMode(ir,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  ir1 = digitalRead(ir);
  if (ir1 == LOW)
  {  digitalWrite(LED,HIGH);
     entry=entry+1;
  }
  else
  {
    digitalWrite(LED,LOW);
    
    }
    
    Serial.println(entry);
    delay(100);


  
  // put your main code here, to run repeatedly:

}
