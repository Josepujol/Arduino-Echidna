/*
  Traffic light
  Green 6s
  Orange 2s
  Red 4s
  Jose Pujol
  February 2019
*/

// constants won't change. They're used here to set pin numbers:
const int ledRPin = 13; // the number of the Red LED pin
const int ledOPin = 12; // the number of the Orange LED pin
const int ledGPin = 11; // the number of the Green LED pin
const int buzzerPin = 10; // the number of the buzzer

void setup() {
  // initialize the LEDs pin as an output:
  pinMode(ledRPin, OUTPUT);
  pinMode(ledOPin, OUTPUT);
  pinMode(ledGPin, OUTPUT);

}

void loop() {
  // GREEN STATE
  digitalWrite(ledRPin, LOW); // 0v LED Red
  digitalWrite(ledOPin, LOW); // 0v LED Orange
  digitalWrite(ledGPin, HIGH); //  5v Green LED
  delay(6000);    // wait 6 seconds

  // ORANGE STATE
                              // 0V LED RED
                              // 5V LED ORANGE
                              // 0V LED GREEN                           
  delay(2000);    // wait 2 seconds

  // ESTADO SEMAFORO ROJO



  delay(4000);    // wait 4 seconds
}
