int LS=12;
int RS=11;
int LM1=4; 
int LM2=5;
int RM1=6; 
int RM2=7; 
int PWM1=9;
int PWM2=10;
int KEEPLS;
int KEEPRS;
void setup() {
  pinMode(LS,INPUT);
  pinMode(RS,INPUT);
  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);
  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);
  pinMode(PWM1,OUTPUT);
  pinMode(PWM2,OUTPUT);
}

void loop() {
  KEEPLS = digitalRead(LS);
  KEEPRS = digitalRead(RS);
  
    analogWrite(PWM1,51);
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    
    analogWrite(PWM2,51);  
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);  
    


  if(KEEPLS == HIGH &&  KEEPRS == HIGH ){
    analogWrite(PWM1,51);
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    
    analogWrite(PWM2,255);  
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);  
    
}
  else if(KEEPLS == HIGH &&  KEEPRS == LOW ){
    analogWrite(PWM1,51);---------------------
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);  
  }
  else if(KEEPLS == LOW &&  KEEPRS == HIGH){
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
    digitalWrite(PWM2,51);  
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);  
  }
  
  else if(KEEPLS == LOW &&  KEEPRS == LOW ){
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);  
    delay(1000);
  }
  else{
    analogWrite(PWM1,51);
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
    analogWrite(PWM2,51);
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    
  }
}