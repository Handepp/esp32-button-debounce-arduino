# ESP32 Button Debounce

Simple ESP32 project to read a push button using software debounce to prevent ghost presses.

---

## 🚀 Features

- Button input using internal pull-up resistor  
- Software debounce (no delay)  
- Prevents multiple/ghost button presses  
- Serial monitor logging  

---

## 🔌 Wiring

Connect the push button to ESP32:

GPIO 4 ---- Button ---- GND


Internal pull-up resistor is used, so no external resistor is required.

---

## ▶️ How to Use

1. Open `main.ino` in Arduino IDE  
2. Select your ESP32 board  
3. Upload the code  
4. Open Serial Monitor (115200 baud)  
5. Press the button and observe the logs  

Example output:
Button Pressed
Button Released

---

## 🔗 Credits

This project uses standard ESP32 Arduino core functions.

- Platform: Arduino ESP32 Core  
https://github.com/espressif/arduino-esp32

---

## 📄 License

MIT License