int LED =9;
int LED1 = 10;
int i = 0;
void setup() {
pinMode(LED,OUTPUT);
pinMode(LED1, OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  for (int i = 0; i < 255; i++){
    analogWrite(LED , i);
    delay(10);}
    for (int i = 255; i > 0; i--){
    analogWrite(LED1 , i);
    delay(10);
    }
for (int i = 255; i > 0; i--){
  analogWrite(LED, i);
  delay(10);}
  for (int i = 0; i < 255; i++){
  analogWrite(LED1, i);
  delay(10); 
}
    }

  

  





  
  // put your main code here, to run repeatedly:
