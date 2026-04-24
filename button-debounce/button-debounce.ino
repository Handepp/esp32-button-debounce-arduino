#define BUTTON_PIN 4

const unsigned long debounceDelay = 50; 

bool buttonState = HIGH;    
bool lastReading = HIGH;     
unsigned long lastDebounceTime = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(115200);
  Serial.println("ESP32 Button Debounce Ready");
}

void loop() {
  bool reading = digitalRead(BUTTON_PIN);

  if (reading != lastReading) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    
    if (reading != buttonState) {
      buttonState = reading;

      if (buttonState == LOW) {
        Serial.println("Button Pressed");
      } else {
        Serial.println("Button Released");
      }
    }
  }

  lastReading = reading;
}