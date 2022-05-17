#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "Keyboard.h"
#include <Adafruit_NeoPixel.h>
bool K1,K2,K3,K4,MI,UP,DW,LE,RI,ENT,ESC,MOD;
int con = 0;
char k1,k2,k3,k4;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(4, A1, NEO_GRB + NEO_KHZ800);
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET     4
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextColor(1);
  pinMode(A0, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  Keyboard.begin();
  strip.begin();                        
  strip.show();
}

void loop() {
  for(int j=0; j<256; j++){
    strip.setPixelColor(0, strip.Color(255-j,j,0));
    strip.setPixelColor(1, strip.Color(255-j,j,0));
    strip.setPixelColor(2, strip.Color(255-j,j,0));
    strip.setPixelColor(3, strip.Color(255-j,j,0));
    KB();
    delay(1);
  }
  for(int j=0; j<256; j++){
    strip.setPixelColor(0, strip.Color(0,255-j,j));
    strip.setPixelColor(1, strip.Color(0,255-j,j));
    strip.setPixelColor(2, strip.Color(0,255-j,j));
    strip.setPixelColor(3, strip.Color(0,255-j,j));
    KB();
    delay(1);
  }
  for(int j=1; j<256; j++){
    strip.setPixelColor(0, strip.Color(j,0,255-j));
    strip.setPixelColor(1, strip.Color(j,0,255-j));
    strip.setPixelColor(2, strip.Color(j,0,255-j));
    strip.setPixelColor(3, strip.Color(j,0,255-j));
    KB();
    delay(1);
  }
}

void KB() {
  display.clearDisplay();
  if (con == 0){
    display.setTextSize(3);
    display.setCursor(40,8);
    display.print("OSU");
    k1='x';
    k2='z';
    k3='x';
    k4='z';
  }else if(con == 1){
    display.setTextSize(3);
    display.setCursor(30,8);
    display.print("TAKO");
    k1='v';
    k2='c';
    k3='x';
    k4='z';
  }else if(con == 2){
    display.setTextSize(3);
    display.setCursor(20,8);
    display.print("MANIA");
    k1='k';
    k2='j';
    k3='f';
    k4='d';
  }else if(con == 3){
    display.setTextSize(2);
    display.setCursor(10,12);
    display.print("MUSE DASH");
    k1='k';
    k2='j';
    k3='f';
    k4='d';
  }
  display.display();
  
  if (digitalRead(15) != K1){
    K1 = digitalRead(15);
    if (digitalRead(15) == LOW){
      Keyboard.press(k1);
    }else{
      Keyboard.release(k1);
    }
  }
  if (digitalRead(A0) != K2){
    K2 = digitalRead(A0);
    if (digitalRead(A0) == LOW){
      Keyboard.press(k2);
    }else{
      Keyboard.release(k2);
    }
  }
  if (digitalRead(9) != K3){
    K3 = digitalRead(9);
    if (digitalRead(9) == LOW){
      Keyboard.press(k3);
    }else{
      Keyboard.release(k3);
    }
  }
  if (digitalRead(A3) != K4){
    K4 = digitalRead(A3);
    if (digitalRead(A3) == LOW){
      Keyboard.press(k4);
    }else{
      Keyboard.release(k4);
    }
  }
  if (digitalRead(4) != UP){
    UP = digitalRead(4);
    if (digitalRead(4) == LOW){
      Keyboard.press(KEY_UP_ARROW);
    }else{
      Keyboard.release(KEY_UP_ARROW);
    }
  }
  if (digitalRead(5) != RI){
    RI = digitalRead(5);
    if (digitalRead(5) == LOW){
      Keyboard.press(KEY_RIGHT_ARROW);
    }else{
      Keyboard.release(KEY_RIGHT_ARROW);
    }
  }
  if (digitalRead(6) != DW){
    DW = digitalRead(6);
    if (digitalRead(6) == LOW){
      Keyboard.press(KEY_DOWN_ARROW);
    }else{
      Keyboard.release(KEY_DOWN_ARROW);
    }
  }
  if (digitalRead(7) != MI){
    MI = digitalRead(7);
    if (digitalRead(7) == LOW){
      Keyboard.press(KEY_RETURN);
    }else{
      Keyboard.release(KEY_RETURN);
    }
  }
  if (digitalRead(8) != LE){
    LE = digitalRead(8);
    if (digitalRead(8) == LOW){
      Keyboard.press(KEY_LEFT_ARROW);
    }else{
      Keyboard.release(KEY_LEFT_ARROW);
    }
  }
  if (digitalRead(10) != ESC){
    ESC = digitalRead(10);
    if (digitalRead(10) == LOW){
      Keyboard.press(KEY_ESC);
    }else{
      Keyboard.release(KEY_ESC);
    }
  }
  if (digitalRead(14) != ENT){
    ENT = digitalRead(14);
    if (digitalRead(14) == LOW){
      Keyboard.press(KEY_RETURN);
    }else{
      Keyboard.release(KEY_RETURN);
    }
  }
  if (digitalRead(16) != MOD){
    MOD = digitalRead(16);
    if (digitalRead(16) == LOW){
      if(con < 3){
        con++;
      }else{
        con = 0;
      }
    }
  }
  strip.show();
}
