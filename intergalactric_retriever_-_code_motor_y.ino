
// inge praat 3031768 - final version 2

//including library for the motor(s)
#include <CheapStepper.h>

//creating each motor and direction variable
CheapStepper stepperY;
boolean moveClockwise = true;


//connecting the x and y of the joystick to pins 
//that can be used to turn on motors
const int Y_pin = A1;


// basis thats a bit VOID
void setup() {
}


// the code for the motor y to go on in 
//the right direction with the right position of the joystick
void loop()
{
  if (analogRead(Y_pin) <= 25) {
    stepperY.step(moveClockwise);
  }

  if (analogRead(Y_pin) >= 1000) {
    stepperY.step(!moveClockwise);
  }

}
