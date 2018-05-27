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
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
//  int buttonState1 = digitalRead(pushButton1);
//  int buttonState2 = digitalRead(pushButton2);
  // print out the state of the button:
  //Serial.print("High: ");
 // Serial.print(buttonState1);
  //Serial.print(", Low: ");
  //Serial.println(buttonState2);

  for(int i = 3; i<=13; i++){
    int state = digitalRead(i);
    if(state == 1){
      Serial.print(i);
      Serial.print(", ");
    }
  }
  int state0 = digitalRead(A0);
  if(state0==1){
    Serial.print("A0, ");
  }
  int state1 = digitalRead(A1);
  if(state1==1){
    Serial.print("A1, ");
  }
    int state2 = digitalRead(A2);
  if(state2==1){
    Serial.print("A2, ");
  }
    int state3 = digitalRead(A3);
  if(state3==1){
    Serial.print("A3, ");
  }
    int state4 = digitalRead(A4);
  if(state4==1){
    Serial.print("A4, ");
  }
    int state5 = digitalRead(A5);
  if(state5==1){
    Serial.print("A5, ");
  }
  Serial.println();
    
  delay(1);        // delay in between reads for stability
}
