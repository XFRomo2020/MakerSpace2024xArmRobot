#include "xArmServoController.h"
#include <SoftwareSerial.h>

// To use SoftwareSerial:
// 1. Uncomment include statement above and following block.
// 2. Update xArmServoController with mySerial.
// 3. Change Serial1.begin to mySerial.begin.
 
#define rxPin 2
#define txPin 3

//Look up Software Serial
SoftwareSerial mySerial = SoftwareSerial(rxPin, txPin);

xArmServoController myArm = xArmServoController(xArm, mySerial);

void setup() {
  mySerial.begin(9600);

  //rule of thumb: one-to-seis, hand-to-base
  //	In other word: servos 1 to 6 is top down
  //	Range of motion goes from 0 to 1000

  // xArm servo positions
   xArmServo handsup[] = {
		{1, 500},
		{2, 500},
		{3, 500},
		{4, 500},
		{5, 500},
		{6, 500}
	   };
  xArmServo bow[] = {
		{1, 650},
		{3, 130},
		{4, 845},
		{5, 650}
	  };
  xArmServo gripUngrip[] = {
		{1,500},
		{2,400},
		{3,300},
		{4,200},
		{5,100},
		{1,0}
	  };
  xArmServo openHand[] = {
	  	{1, 0}
	  };
  xArmServo closeHand[] = {
	  	{1, 1000}
	  };
  xArmServo rotateBaseNorth[] = {
	  	{6, 0}
	  };
  xArmServo rotateBaseSouth[] = {
	  	{6, 1000}
	  };
 
  // LeArm servo positions. To use:
  // 1. Comment out above xArmServo definitions above.
  // 2. Change xArmServoController mode to LeArm.
  // 3. Uncomment following block.
  /*
  xArmServo handsup[] = {{1, 1500},
                      {2, 1500},
                      {3, 1500},
                      {4, 1500},
                      {5, 1500},
                      {6, 1500}};
  xArmServo bow[] = {{1, 2365},
                     {3, 520},
                     {4, 650},
                     {5, 1035}};
    */

  myArm.setPosition(openHand, 1);
  delay(1000);
  myArm.setPosition(closeHand, 1);
  delay(1000);
  myArm.setPosition(rotateBaseNorth, 1, 2000);
  delay(1000);
  myArm.setPosition(rotateBaseSouth, 1, 2000);
  //delay(1000);
  //myArm.setPosition(handsup, 6, 1000, true);
  //delay(1000);
  //myArm.setPosition(bow, 4, 3000, true);
  //delay(1000);
  //myArm.setPosition(handsup, 6);
  //myArm.setPosition(gripUngrip, 6);

  // Your setup here.
}

void loop() {
  // Your code here.
}
