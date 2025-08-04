#include <Arduino.h>
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(11,12); // RX, T

void setup() {
  Serial.begin(9600);  
  pinMode(5, OUTPUT);   
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT); //       
  pinMode(10, OUTPUT); // 
  

  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

  Serial.begin(9600);
  BTSerial.begin(9600); 

  Serial.println("HC-05...");
}

void loop() {

  if (Serial.available()) {
    char c = Serial.read();
    BTSerial.write(c);
  }

  if (BTSerial.available()) {
    char c = BTSerial.read();
    Serial.write(c);
  }
  
}
