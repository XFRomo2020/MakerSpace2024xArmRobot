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

  // xarm servo positions
   xArmServo handsUp[] = {
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
  xArmServo openHand[] = {
	  	{1, 0}
	  };
  xArmServo closeHand[] = {
	  	{1, 1000}
	  };
  xArmServo rotateBaseNorth[] = {
	  	{6, 75}
	  };
  xArmServo rotateBaseSouth[] = {
	  	{6, 850}
	  };

void setup() {
  mySerial.begin(9600);

  //rule of thumb: one-to-seis, hand-to-base
  //	in other word: servos 1 to 6 is top down
  //	range of motion goes from 0 to 1000
  //	base servo cannot go full 360



  //Serial.println("Hello Arduino\n");
  
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
  myArm.setPosition(openHand, 1);
  delay(1000);
  myArm.setPosition(closeHand, 1);
  delay(1000);
  myArm.setPosition(rotateBaseNorth, 1, 2000, true);
  delay(1000);
  myArm.setPosition(rotateBaseSouth, 1, 2000, true);
  delay(1000);
}
