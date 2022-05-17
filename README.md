# OSU開源小鍵盤
我想出門打OSU，筆電鍵盤超沒手感，帶個機械鍵盤又太大，所以搞了這麼個東西   
真的是無聊做出來的產物，如果大家想拿去玩，請自便，但請不要抹掉板子上的基本資訊與QR-CODE
![正](https://user-images.githubusercontent.com/53372547/168848452-bad374c1-551e-4235-8e1b-e28a5783d317.jpg)
![反](https://user-images.githubusercontent.com/53372547/168848537-1d6a3b4f-0fea-4ba8-b9a3-1e1a60da7d54.jpg)

## 零件清單
- Arduino Pro Micro  
- 兩腳輕觸開關 X3  
- MX1A Cherry 機械軸 X4  
- WS2812B 2020 RGB燈珠 X4  
- 0.91" OLED螢幕 X1 [I2C版]  
- 五向開關 X1  
- M3 螺絲+羅母 X2  

## 程式 [使用Arduino IDE 開發]
### 開發板選擇：
- Arduino Micro  
### 導入程式庫：  
- Keyboard.h  
- Adafruit_NeoPixel.h  
- SPI.h  
- Wire.h  
- Adafruit_GFX.h  
- Adafruit_SSD1306.h  
### 使用的腳位：  
- K1：D15  
- K2：A0  
- K3：D9  
- K4：A3  
- 5U：D4  
- 5D：D6  
- 5L：D8  
- 5R：D5  
- 5M：D7  
- ESC：D10  
- ENT：D14  
- MOD：D16  
- RGB：A1  
