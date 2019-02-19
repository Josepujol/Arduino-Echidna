/*
   Button LEd with memory
   Noviembre de 2017
   Jose Pujol
*/
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 3;     // the number of the pushbutton pin
const int ledPin = 6;       // the number of the led pin

// variables que cambian
int ledState = LOW;         // State of the LED OFF
int buttonState = 0;        // // variable for reading the pushbutton status

void setup() {
  // initialize the button pin as an input:
  pinMode(buttonPin, INPUT);
  // initialize the LED pin as an input:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed
  if (buttonState == HIGH) {
    // if the ledState is LOW
    if (ledState == LOW) {
      ledState = HIGH;  // ledState HIGH
    }
    // otherwise 
    else {
      ledState = LOW;   // ledState LOW
    }
    // time to avoid the condition 
    delay(200);
  }
  // stablish the state of the LED
  digitalWrite(ledPin, ledState);
}
