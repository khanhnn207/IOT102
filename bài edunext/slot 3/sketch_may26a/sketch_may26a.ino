  const int ledPins[] = {2, 3, 4, 5};
  const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

  const int potPin = A0;
void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(potPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);

  int delayTime = map(potValue, 0, 1025, 50, 5000);

  Serial.print("Gia tri VR: ");
  Serial.print(potValue);
  Serial.print("Thoi gian chu ky: ");
  Serial.print(delayTime);
  Serial.println("ms");

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(delayTime);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(delayTime);

}
