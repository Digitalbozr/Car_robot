#include <Arduino.h>

void setup() {
  Serial.begin(9600);  // HC-06 غالبًا عندو 9600 baud
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    
    Serial.print("Received: ");
    Serial.println(c);

    if (c == '1') {
      Serial.println("Command: TURN ON");
    } else if (c == '0') {
      Serial.println("Command: TURN OFF");
    }
  }
}
