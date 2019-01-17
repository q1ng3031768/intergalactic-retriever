// inge praat 3031768 - final version 1

//including library for the motor(s)
#include <CheapStepper.h>

//creating each motor and direction variable
CheapStepper stepperX;
boolean moveClockwise = true;


//connecting the x and y of the joystick to pins 
//that can be used to turn on motors
const int X_pin = A0;


// basis thats a bit VOID
void setup() {
}


// the code for the motor x to go on in 
//the right direction with the right position of the joystick
void loop()
{

  if (analogRead(X_pin) <= 25) {
    stepperX.step(moveClockwise);
  }

  if (analogRead(X_pin) >= 1000) {
    stepperX.step(!moveClockwise);
  } 
  
}
