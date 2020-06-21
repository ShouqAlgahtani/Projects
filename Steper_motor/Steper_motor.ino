#include <Stepper.h>
int spr=20;
Stepper moto(spr, 8, 10, 9, 11);
void setup() {
  // put your setup code here, to run once:
  moto.setSpeed(7);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("counterclockwise");
moto.step(-spr);
delay(1000);
Serial.println("clockwise");
moto.step(spr);
delay(1000);
}
