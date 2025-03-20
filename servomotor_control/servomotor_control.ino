#include <Servo.h>

Servo myServo;
int led1 = 7;
int led2 = 8;
int servoPin = 9;
int angle = 0;

void setup() {
  myServo.attach(servoPin);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  for (angle = 0; angle <= 180; angle += 1) {
    myServo.write(angle);
    delay(15);
    controlLEDs(angle);
  }
  for (angle = 180; angle >= 0; angle -= 1) {
    myServo.write(angle);
    delay(15);
    controlLEDs(angle);
  }
}

void controlLEDs(int angle) {
  if (angle < 90) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
}
