#include <Servo.h>
Servo sv;

void setup(){
  Serial.begin(9600);
  sv.attach(9);
  
  
}

void loop(){
  
  for(int i=0;i<180;i++){
    sv.write(i);
    Serial.println(i);
    delay(10);
  }
  for(int i=180;i>0;i--){
    sv.write(i);
    Serial.println(i);
    delay(10);
  
  }
}
