#include <Arduino.h>

// test_servo.cpp
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(A0);
}

void loop() {
  myServo.write(0);
  delay(1000);
  myServo.write(90);
  delay(1000);
  myServo.write(180);
  delay(1000);
}