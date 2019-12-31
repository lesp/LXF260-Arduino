#include <Keyboard.h>

void setup() {
  pinMode(2, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  while (digitalRead(2) == HIGH) {
    delay(50);
  }
  delay(100);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('t');
    delay(100);
    Keyboard.releaseAll();
    Keyboard.println("http://pcottle.github.io/MSOutlookit/");
    Keyboard.releaseAll();
    delay(100);
  }