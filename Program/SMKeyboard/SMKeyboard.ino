#include "Keyboard.h"
bool K1,K2,K3,K4,K5,K6,K7,K8;

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(2) != K1){
    K1 = digitalRead(2);
    if (digitalRead(2) == LOW){
      Keyboard.press('d');
    }else{
      Keyboard.release('d');
    }
  }
  if (digitalRead(3) != K2){
    K2 = digitalRead(3);
    if (digitalRead(3) == LOW){
      Keyboard.press('f');
    }else{
      Keyboard.release('f');
    }
  }
  if (digitalRead(4) != K3){
    K3 = digitalRead(4);
    if (digitalRead(4) == LOW){
      Keyboard.press('j');
    }else{
      Keyboard.release('j');
    }
  }
  if (digitalRead(5) != K4){
    K4 = digitalRead(5);
    if (digitalRead(5) == LOW){
      Keyboard.press('k');
    }else{
      Keyboard.release('k');
    }
  }
  if (digitalRead(6) != K5){
    K5 = digitalRead(6);
    if (digitalRead(6) == LOW){
      Keyboard.press(KEY_RIGHT_ARROW);
    }else{
      Keyboard.release(KEY_RIGHT_ARROW);
    }
  }
  if (digitalRead(7) != K6){
    K6 = digitalRead(7);
    if (digitalRead(7) == LOW){
      Keyboard.press(KEY_LEFT_ARROW);
    }else{
      Keyboard.release(KEY_LEFT_ARROW);
    }
  }
  if (digitalRead(8) != K7){
    K7 = digitalRead(8);
    if (digitalRead(8) == LOW){
      Keyboard.press(KEY_RETURN);
    }else{
      Keyboard.release(KEY_RETURN);
    }
  }
  if (digitalRead(9) != K8){
    K8 = digitalRead(9);
    if (digitalRead(9) == LOW){
      Keyboard.press(KEY_ESC);
    }else{
      Keyboard.release(KEY_ESC);
    }
  }
  delay(5);
} 
