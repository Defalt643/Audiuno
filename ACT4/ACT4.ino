int LED[]={1,2,3};
void setup() {
 for(int i=0;i<=3;i++){
  pinMode(LED[i],OUTPUT); 
 }
}

void loop() {
  for(int i=0;i<=3;i++){
    digitalWrite(LED[i],1);
  delay(500);
  }
  for(int i=3;i>=0;i--){
    digitalWrite(LED[i],0);
  delay(500);
}
}
