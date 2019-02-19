/*
 * Program to print the value of LDR 
 * in the serial moniotr
 * Noviembre 2017
 * Jose Pujol
 */
const int ldrPin = A5;    // LDR pin number
int sensorValue = 0;        // variable to store the value of LDR

void setup() {
  // open the serial port and stablish the bits/s
  Serial.begin(9600);
}

void loop() {
  // read the value of the sensor
  sensorValue = analogRead(ldrPin);
  // print a text
  Serial.print("LDR Value=");
  // print the value of the sensor
  Serial.println(sensorValue);
  // time to see the value
  delay(500);
}
