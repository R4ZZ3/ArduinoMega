// color swirl! connect an RGB LED to the PWM pins as indicated
// in the #defines
// public domain, enjoy!
 
#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 3
 
#define FADESPEED 5     // make this higher to slow down
 
void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}
 
 
void loop() {
  digitalWrite(REDPIN, HIGH);
  delay(2000);
  digitalWrite(REDPIN, LOW);
  delay(1000);
  digitalWrite(GREENPIN, HIGH);
  delay(2000);
  digitalWrite(GREENPIN, LOW);
  delay(1000);
  digitalWrite(BLUEPIN, HIGH);
  delay(2000);
  digitalWrite(BLUEPIN, LOW);
  delay(1000);
}
 
  
