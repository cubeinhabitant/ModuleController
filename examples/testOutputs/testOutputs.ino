/**
 * Test the two solid state outputs. When trigger1 is active output1 will be active.
 * When trigger2 is active output2 will be active.
 */
const int sceneActivePin = 7;
const int trigger1Pin = A0;
const int trigger2Pin = A1;
const int output1Pin = 5;
const int output2Pin = 6;
int trigger1Pressed = 0;
int trigger2Pressed = 0;

void setup() {
  pinMode(sceneActivePin, OUTPUT);
  pinMode(output1Pin, OUTPUT);
  pinMode(output2Pin, OUTPUT);
  pinMode(trigger1Pin, INPUT);
  pinMode(trigger2Pin, INPUT);
}

void loop() {
  trigger1Pressed = !digitalRead(trigger1Pin);
  trigger2Pressed = !digitalRead(trigger2Pin);
  if (trigger1Pressed || trigger2Pressed) {
    digitalWrite(sceneActivePin, 1);
    if (trigger1Pressed) {
      analogWrite(output1Pin, 255);
    } else {
      analogWrite(output2Pin, 255);
    }
  } else {
    digitalWrite(sceneActivePin, 0);
    analogWrite(output1Pin, 0);
    analogWrite(output2Pin, 0);
  }
}
