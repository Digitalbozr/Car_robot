#include <Arduino.h>

// test_servo.cpp
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(A0);
  Serial.begin(9600);
}

void loop() {
  myServo.write(0);
  Serial.println("Servo moved to 0 degrees");
  delay(1000);
  myServo.write(90);
  Serial.println("Servo moved to 90 degrees");
  delay(1000);
  myServo.write(180);
  Serial.println("Servo moved to 180 degrees");
  delay(1000);
}