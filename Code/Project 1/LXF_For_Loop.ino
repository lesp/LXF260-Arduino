void setup() {
  pinMode(2, OUTPUT);
}
void loop() {
  for (int i = 0; i <= 3; i++) {
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    delay(100);
  }
  delay(1000);
}
