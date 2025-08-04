#include <Arduino.h>

// test_l293d.cpp
#define IN1 2
#define IN2 3

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() {
  // Forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(4000);

  // Stop
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(4000);

  // Backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(4000);


}
