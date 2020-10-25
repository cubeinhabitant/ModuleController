/**
 * Test the two trigger inputs. If an input is triggered the SceneActive LED will
 * light up. The specific trigger LED should also automatically light up. (The
 * specific trigger LEDs are implemented in hardware and don't required software
 * to turn them on.)
 */
const int sceneActivePin = 7;
const int trigger1Pin = A0;
const int trigger2Pin = A1;
int trigger1Pressed = 0;
int trigger2Pressed = 0;

void setup() {
  pinMode(sceneActivePin, OUTPUT);
  pinMode(trigger1Pin, INPUT);
  pinMode(trigger2Pin, INPUT);
}

void loop() {
  trigger1Pressed = !digitalRead(trigger1Pin);
  trigger2Pressed = !digitalRead(trigger2Pin);
  if (trigger1Pressed || trigger2Pressed) {
    digitalWrite(sceneActivePin, 1);
  } else {
    digitalWrite(sceneActivePin, 0);
  }
}
