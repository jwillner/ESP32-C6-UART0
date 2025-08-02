#include <Arduino.h>

void setup() {
  Serial.begin(115200); // USB-CDC
  Serial1.begin(115200, SERIAL_8N1, 17, 16); // UART0-Pins
  
  delay(1000);
  Serial.println("USB-CDC gestartet");
  Serial1.println("UART0 gestartet");
}

void loop() {
  Serial.println("Hallo von USB-CDC");
  Serial1.println("Hallo von UART0");
  delay(1000);
}