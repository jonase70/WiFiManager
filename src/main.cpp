#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200); // opens serial port, sets data rate to 115200 bps
}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World!");
  delay(1000);
}