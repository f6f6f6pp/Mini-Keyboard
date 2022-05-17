# OSU開源小鍵盤
我想出門打OSU，筆電鍵盤超沒手感，帶個機械鍵盤又太大，所以搞了這麼個東西   
真的是無聊做出來的產物，如果大家想拿去玩，請自便，但請不要抹掉板子上的基本資訊與QR-CODE(紅框內的別更動，移位可以)
![KEEP](https://user-images.githubusercontent.com/53372547/128504728-245516b4-cbd2-469b-8593-93b7aa101d08.jpg)

## 零件清單
- 16Mhz貼片晶震 X1 [規格：3213/3215]  
- ATmega32U4-MU X1  
- 兩腳輕觸開關 X8 [可用凱華紅點靜音微動替代，手感很好]  
- MX1A Cherry 機械軸 X4  
- WS2812B 2020 RGB燈珠 X4  
- 0.91" OLED螢幕 X1 [I2C版]  
- SKSCLBE010 側按鍵 X1 [可不裝，拔USB線也差不多效果，或拿金屬鑷子短接焊點]  
- 0603 1uF 貼片電容 X1  
- 0603 LED 綠[電源] X1  
- 0603 LED 紅[RX/TX] X2  
- 0603 22R 貼片電阻 X2  
- 0603 330R 貼片電阻 X3  
- 0603 10K 貼片電阻 X1  
- SMD式 Micro-USB 接口 X1  
- 1X4 針腳 X1 [OLED螢幕用，根據各位外殼設計，用排線也行]  
- 2X3 針腳 X1 [ICSP 燒錄用，裝螢幕前記得解焊掉]  

## 程式 [使用Arduino IDE 開發]
### 開發板選擇：
- Arduino Micro  
### 導入程式庫：  
- Keyboard.h  
- Adafruit_NeoPixel.h  
### 使用的腳位：  
- K1：P40 [A4 / D22]  
- K2：P41 [A5 / D23]  
- K3：P25 [D4]  
- K4：P26 [D12]  
- SU：P31 [D5]  
- SD：P36 [A0 / D18]  
- SL：P32 [D13]  
- SR：P37 [A1 / D19]  
- SE：P38 [A2 / D20]  
- SC：P28 [D8]  
- SM+：P39 [A3 / D21]  
- SM-：P27 [D6]  
- LED：P1 [D7] (WS2812B)  
