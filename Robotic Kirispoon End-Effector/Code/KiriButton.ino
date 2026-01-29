// KiriButton Code
/* Created by Keone Leao

  Description: This code was created to control the robotic
  kirispoon end effector with only a button. 
  This program will print what state the kirigami is in
  as well as open and close the kirigami. The 
  "openPosition" and "closedPosition" variables can
  be changed to stretch and compress the kirigami different
  amounts. 
  ~ to see the Serial.print() messages, go to 'Tools' 
    and press 'Serial Monitor'. Or press Ctrl+Shft+M.
  ~ fastest way to clear the serial monitor is to close 
    and open again*/


#include <Servo.h> // Include the Servo library

Servo myservo; // Create a servo object to control a servo (MAX 7.4 V)
               // ~voltage can be less if less torque is required~
int KiriState = 0; // 0 closed, 1 open
const int buttonPin = 2; // arduino pin the button is wired to
const int openPosition = 50; // position of servo when kirigami is open
const int closedPosition = 5; // position of servo when kirigami is closed

void setup() {
  myservo.attach(9); // Attaches the servo on pin 9 to the servo object
  myservo.write(openPosition); // start with kirispoon open
  pinMode(buttonPin, INPUT_PULLUP); // specifies how to interpret the button
  Serial.begin(9600); // baud rate
  Serial.print("Begin"); // tells user when loop is about to begin
                     // You can change '9' to the digital pin your servo's signal wire is connected to
}

void loop() {
  int buttonState = digitalRead(buttonPin); // reads if the button is pressed
  //Serial.print(buttonState);
  if (buttonState == HIGH) // button pressed
  {
    Serial.print("pressed");

    if (KiriState == 0) // if kirigami is closed, then open it
    {
      KiriState = 1; // change kirigami state to open
      myservo.write(openPosition); // move servos to open
      Serial.print("open  ");
      delay(100); // short delay is needed for button signal to come through
    }
    else // else if kirigami is open, close it
    {
      KiriState = 0; // set kirigami state to closed
      myservo.write(closedPosition); // move servo to close kirigami
      Serial.print("closed  ");
      delay(100); // short delay is needed for button signal to come through
    }
  }

  delay(200); // delay is needed so one button press does not do two actions
}