#include <Servo.h>

Servo servo;

int servoVal = 0;

void setup() {
  servo.attach(9);

  servo.write(servoVal);

}

void loop() {
  servoVal += 10;
  servo.write(servoVal);
  delay(300);
  
  if (servoVal == 180){
    while (servoVal > 0) {
      servoVal -= 10;
      servo.write(servoVal);
      delay(300);
    }

  }

}