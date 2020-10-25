/**
 * Test the SceneActive LED. Blinks the LED on for one second, off for one second.
 */
const int sceneActivePin = 7;

int ledState = LOW;

unsigned long previousMillis = 0;

const long interval = 1000;

void setup() {
  pinMode(sceneActivePin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    digitalWrite(sceneActivePin, ledState);
  }
}
