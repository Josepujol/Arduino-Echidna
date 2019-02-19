/*
  Fantastic car
  Jose Pujol
  February 2019
*/

// constants won't change. They're used here to set pin numbers:
const int ledRPin = 13; // the number of the Red LED pin
const int ledOPin = 12; // the number of the Orange LED pin
const int ledGPin = 11; // the number of the Green LED pin
const int ledBPin = 6; // the number of the Blue LED pin

// variables will change:
int n = 1; // variable to count

void setup() {
  // initialize the LEDs pin as an output:
  pinMode(ledRPin, OUTPUT);
  pinMode(ledOPin, OUTPUT);
  pinMode(ledGPin, OUTPUT);
  pinMode(ledBPin, OUTPUT);
}

void loop() {

  if (n == 1) {
    digitalWrite(ledGPin, HIGH); //  5v Green LED
  }
  else {
    digitalWrite(ledGPin, LOW); //  0v Green LED
  }
  if (n == 2) {
    digitalWrite(ledOPin, HIGH); //  5v Green LED
  }
  else {
    digitalWrite(ledOPin, LOW); //  0v Green LED
  }
  if (n == 3) {
    digitalWrite(ledRPin, HIGH); //  5v Green LED
  }
  else {
    digitalWrite(ledRPin, LOW); //  0v Green LED
  }
  if (n == 4) {
    digitalWrite(ledBPin, HIGH); //  5v Green LED
  }
  else {
    digitalWrite(ledBPin, LOW); //  0v Green LED
  }

  n++;

  if (n == 5) {
    n = 1;
  }

  delay(1000);
}


