void setup() {

  for (int Pin = 7;Pin < 12; Pin++) {
    pinMode(Pin, OUTPUT);
  }
}
void loop() {
for(int Pin= 7; Pin <12; Pin++){
    digitalWrite(Pin, HIGH);
    delay(5000);
    digitalWrite(Pin, LOW);

  }
for(int Pin = 11; Pin >= 7; Pin--) {
  digitalWrite(Pin, HIGH);
  delay(5000);
  digitalWrite(Pin, LOW);
}
}
