const int LED_PINS[] = {13, 12, 11, 10};  // Define 4 LED pins

void setup() {
  // Set all LED pins as OUTPUT
  for (int i = 0; i < 4; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
}

void loop() {
  // Turn ON all LEDs
  for (int i = 0; i < 4; i++) {
    digitalWrite(LED_PINS[i], HIGH);
  }

  // LEDs stay ON forever
}
