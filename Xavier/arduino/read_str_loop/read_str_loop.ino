#include "xArmServoController.h"
#include <SoftwareSerial.h>

// To use SoftwareSerial:
// 1. Uncomment include statement above and following block.
// 2. Update xArmServoController with mySerial.
// 3. Change Serial1.begin to mySerial.begin.

#define rxPin 2
#define txPin 3

SoftwareSerial mySerial = SoftwareSerial(rxPin, txPin);

xArmServoController myArm = xArmServoController(xArm, mySerial);

xArmServo handsUp[] = {
	{1, 500},
	{2, 500},
	{3, 500},
	{4, 500},
	{5, 500},
	{6, 500}
};

void setup() 
{
    // initialize serial:
    mySerial.begin(9600);
    Serial.begin(9600);
    Serial.println("Enter motor steps:");
}

void loop() {
    //variable decl. for access at this scope
    int motor;
    int steps;

    // if there's any serial available, read it:
    while (Serial.available() > 0) 
    {
    // look for the next valid integer in the incoming serial stream:
    int one = Serial.parseInt();
    // do it again:
    int two = Serial.parseInt();
    // look for a string
    //String look_def = Serial.readString();

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') 
    {
        motor = constrain(one, 1, 6);

        steps = constrain(two, 1, 1000);

        Serial.print("Motor: ");
        Serial.print(motor, DEC);
        Serial.print(" Steps: ");
        Serial.println(steps, DEC);
    }
    //if(look_def == "default\n"){
    //    myArm.setPosition(handsUp, 6);
    //}

    Serial.print(motor);
    Serial.print(" ");
    Serial.println(steps);
    
    myArm.setPosition(motor, steps);
  }
}