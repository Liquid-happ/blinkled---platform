#include <Arduino.h>

#define LED_BUILTIN 2   
#define LED_EXT     4   

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_EXT, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(LED_EXT, HIGH);
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED_EXT, LOW);
  delay(1000);
}
