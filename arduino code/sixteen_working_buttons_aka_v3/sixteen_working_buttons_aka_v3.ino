/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.
  
  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
//int pushButton1 = 4;
//int pushButton2 = 5;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
//  pinMode(pushButton1, INPUT);
//  pinMode(pushButton2, INPUT);
  for(int i = 3; i<=13; i++){
    pinMode(i, INPUT);
  }
  for(int i = 0; i<=5; i++){
    pinMode(A[i], INPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
//  int buttonState1 = digitalRead(pushButton1);
//  int buttonState2 = digitalRead(pushButton2);
  // print out the state of the button:
  Serial.print("High: ");
  Serial.print(buttonState1);
  Serial.print(", Low: ");
  Serial.println(buttonState2);
  delay(1);        // delay in between reads for stability
}
