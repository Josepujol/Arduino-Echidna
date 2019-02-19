/*
  Game with lights
  Jose Pujol
  February 2019
*/

// constants won't change. They're used here to set pin numbers:
const int ledRPin = 13; // the number of the Red LED pin
const int ledOPin = 12; // the number of the Orange LED pin
const int ledGPin = 11; // the number of the Green LED pin
const int ledBPin = 6; // the number of the Blue LED pin
const int buttonPin = 2; // the number of the pushbutton pin
const int buzzerPin = 10;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int n = 1; // variable to count
unsigned long previousMillis = 0;        // will store last time LED was updated
long interval = 600;            // variable to stablish the time to wait

void setup() {
  // initialize the LEDs pin as an output:
  pinMode(ledRPin, OUTPUT);
  pinMode(ledOPin, OUTPUT);
  pinMode(ledGPin, OUTPUT);
  pinMode(ledBPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

}

void loop() {

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;
    n++;
    if (n == 5) {
      n = 1;
    }
  }

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    if (n == 2) {
      analogWrite(buzzerPin, 250);
      delay(200);
      analogWrite(buzzerPin, 0);
      delay(200);
      n = 0;
      interval = interval - 100;
    }
    else {
      analogWrite(buzzerPin, 10);
      delay(1000);
      interval = 600;
      analogWrite(buzzerPin, 0);
    }
  }
  ledsecuence();

 if (interval==100){
  music();
  interval=600;
 }
}

void ledsecuence() {
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

}

void music(){


}




