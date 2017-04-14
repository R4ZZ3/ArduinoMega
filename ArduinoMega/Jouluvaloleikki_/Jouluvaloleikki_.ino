/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
int kierroslukulaskuri1 = 0; // kuinka monta kertaa ajanut ledi kerrallaan for-loopin
int kierroslukulaskuri2 = 0; // kuinka monta kertaa ajanut kaikki ledit kerrallaan for-loopin
int kierroslukulaskuri3 = 0; // kuinka monta kertaa ajetaan looppi 3

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT); 
}

// the loop function runs over and over again forever
void loop() {
  kierroslukulaskuri1 = 0;
  kierroslukulaskuri2 = 0;
  // LOOPATAAN KAIKKIA LEDEJÄ PÄÄLLE JA POIS LEDI KERRALLAAN ledistä 2 alkaen ja lopettaen lediin 17; TÄTÄ TOTEUTETAAN 5 KERTAA//
  for (int kierroslukulaskuri1 = 0; kierroslukulaskuri1 <= 5; kierroslukulaskuri1++) {
      for(int i=2; i <= 17; i++){
      digitalWrite(i, HIGH);
      delay(30);
      digitalWrite(i, LOW);
      }
  }
   // LOOPATAAN KAIKKI LEDIT PÄÄLLE JA SITTEN SAMMUTETAAN YKSITELLEN alkaen ledistä 2 ja lopettaen lediin 17; TÄTÄ TOTEUTETAAN 5 KERTAA//
  for (int kierroslukulaskuri2 = 0; kierroslukulaskuri2 <= 5; kierroslukulaskuri2++) {
    for(int i=2; i <= 17; i++){
      digitalWrite(i, HIGH);
      delay(50);
    }
    delay(1000);
    for(int i=2; i <= 17; i++){
      digitalWrite(i, LOW);
      delay(50);
    }
  }
    for (int kierroslukulaskuri3 = 0; kierroslukulaskuri3 <= 5; kierroslukulaskuri3++) {
    for(int i=2; i <= 16; i=i+2){
      digitalWrite(i, HIGH);
      delay(50);
     }
    delay(1000);
    for(int i=2; i <= 16; i=i+2){
      digitalWrite(i, LOW);
      delay(50);
      }
    }
}
  

