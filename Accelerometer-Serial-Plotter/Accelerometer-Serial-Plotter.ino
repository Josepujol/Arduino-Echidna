/*
  Accelerometer by Serial-plotter
  Noviembre 2017
  JosePujol
*/

const int xPin = A2;    // Accelerometer x pin number
const int yPin = A3;    // Accelerometer x pin number
int xValue = 0;  // variable to store the value of x-Accelerometer
int yValue = 0;  // variable to store the value of y-Accelerometer

void setup() {
  Serial.begin(9600);          // open the serial port and stablish the bits/s
}

void loop() {
  // read the value of the sensor
  xValue = analogRead(xPin);
  yValue = analogRead(yPin);
  Serial.print(xValue);         // print the value of the sensor
  Serial.print("\t");           // print a tab
  Serial.println(yValue);       // print the value of the sensor
  delay(100);                  // wait 0.1s
}

