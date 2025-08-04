#include <Arduino.h>

// تعريف الدبابيس
#define PIN_2 2
#define PIN_3 3
#define PIN_4 4

void setup() {
  Serial.begin(9600);

  pinMode(PIN_2, INPUT);
  pinMode(PIN_3, INPUT);
  pinMode(PIN_4, INPUT);
}

void loop() {
  int state2 = digitalRead(PIN_2);
  int state3 = digitalRead(PIN_3);
  int state4 = digitalRead(PIN_4);

  Serial.print("Pin 2: ");
  Serial.print(state2);
  Serial.print("  |  Pin 3: ");
  Serial.print(state3);
  Serial.print("  |  Pin 4: ");
  Serial.println(state4);

  delay(500); 
}
