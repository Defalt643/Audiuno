int LED1=1;
int LED2=2;
int LED3=3;
void setup() {
  pinMode (LED1,OUTPUT);
  pinMode (LED2,OUTPUT);
  pinMode (LED3,OUTPUT);

}
 
  void loop() {
     digitalWrite(1,HIGH);
     delay(500);
     digitalWrite(2,HIGH);
     delay(500);
     digitalWrite(3,HIGH);
     delay(500);
     digitalWrite(3,LOW);
     delay(500);
     digitalWrite(2,LOW); 
     delay(500);
     digitalWrite(1,LOW);
     delay(500);
     
    }
