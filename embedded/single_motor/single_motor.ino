
int LED=3;
int ir=4;
int m1=7;
int m2=8;
int m3 =12;
int m4=13;
int ir1;


void setup() {

  pinMode(LED,OUTPUT);
  pinMode(ir,INPUT);
  pinMode(m1, OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  ir1 = digitalRead(ir);
  if (ir1 == LOW)
  {  digitalWrite(LED,HIGH);
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m3, LOW);
    digitalWrite(m4, HIGH);
    
     
  }

  else  
  {
    digitalWrite(LED,LOW);
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m4, LOW);
    
    }
    Serial.println(ir1);
    delay(100);


  
  // put your main code here, to run repeatedly:

}
