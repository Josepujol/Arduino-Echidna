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
long interval = 400;            // variable to stablish the time to wait

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
      interval = interval - 50;
    }
    else {
      analogWrite(buzzerPin, 10);
      delay(1000);
      interval = 600;
      analogWrite(buzzerPin, 0);
    }
  }
  ledsecuence();

  if (interval == 50) {
    musicwin();
    interval = 600;
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

void musicwin() {
#define NOTE_C4  262
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
  int melody[] = {
    NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
  };

  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  int noteDurations[] = {
    4, 8, 8, 4, 4, 4, 4, 4
  };
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(10, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(10);
  }

}






