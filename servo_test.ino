#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(10);
}

void loop() {
  servo.write(57);
  delay(2000);
  servo.write(20);
  delay(2000);
}
