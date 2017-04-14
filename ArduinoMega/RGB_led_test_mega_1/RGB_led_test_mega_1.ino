void setup() {
  for (int i=12; i<54; i++) {
  pinMode(i, OUTPUT);
  }
}
 
 
void loop() {
  for (int i = 12; i<54; i++) {
    digitalWrite(i, HIGH);
    delay(200);
    //digitalWrite(i, LOW);
  }
  delay(1000);
}
