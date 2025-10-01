#include <Arduino.h>
#include <OneButton.h>

#define LED_PIN 2
#define BTN_PIN 4

OneButton button(BTN_PIN, true); // true = sử dụng INPUT_PULLUP

bool ledState = false;   // trạng thái bật/tắt LED
bool blinking = false;   // trạng thái nháy LED

// Single click: ON/OFF LED
void toggleLed() {
  blinking = false;   // nếu đang nháy thì dừng nháy
  ledState = !ledState;
  digitalWrite(LED_PIN, ledState ? HIGH : LOW);
}

// Double click: chuyển sang chế độ nháy LED
void toggleBlinking() {
  blinking = !blinking;
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  button.attachClick(toggleLed);          // single click
  button.attachDoubleClick(toggleBlinking); // double click
}

void loop() {
  button.tick(); // xử lý button mỗi vòng lặp

  if (blinking) {
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
    delay(200);
  }
}
