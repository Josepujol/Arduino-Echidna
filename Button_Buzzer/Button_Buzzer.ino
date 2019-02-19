/*
  Button-Buzzer

*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int buzzerPin =  10;      // the number of the buzzer pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the button pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn buzzer
    analogWrite(buzzerPin, 128);
  } else {
    // turn buzzer off:
    analogWrite(buzzerPin, 0);
  }
}
