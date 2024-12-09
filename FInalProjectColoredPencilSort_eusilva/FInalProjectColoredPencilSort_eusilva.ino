#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *myMotor = AFMS.getMotor(4);
Adafruit_DCMotor *myMotor2 = AFMS.getMotor(3);
Adafruit_DCMotor *myMotor3 = AFMS.getMotor(1);

void setup() {
  // put your setup code here, to run once:
  AFMS.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  //Delay before starting
  myMotor2->run(RELEASE);
  delay(20000);

  //Grab Colored pencil 1
  myMotor->setSpeed(120);
  myMotor->run(FORWARD);
  delay(3550);

  myMotor->run(RELEASE);
  delay(3000);

  //Lifts up elbow
  myMotor2->setSpeed(120);
  myMotor2->run(BACKWARD);
  delay(3000);

  myMotor2->run(RELEASE);
  delay(3000);

  //Take colored pencil to bin 1
  myMotor3->setSpeed(120);
  myMotor3->run(FORWARD);
  delay(4000);

  myMotor3->run(RELEASE);
  delay(3000);

  //Lets go of colored pencil 1
  myMotor->setSpeed(110);
  myMotor->run(BACKWARD);
  delay(3000);

  myMotor->run(RELEASE);
  delay(3000);

  //Lifts up elbow even more
  myMotor2->setSpeed(120);
  myMotor2->run(BACKWARD);
  delay(3000);

  myMotor2->run(RELEASE);
  delay(3000);

  //Return to position 1 of colored pencil
  myMotor3->setSpeed(140);
  myMotor3->run(BACKWARD);
  delay(5650);

  myMotor3->run(RELEASE);
  delay(3000);

  //Puts down elbow
  myMotor2->setSpeed(100);
  myMotor2->run(FORWARD);
  delay(3000);

  myMotor2->run(RELEASE);
  delay(3000);
  

  //Puts down elbow even more
  myMotor2->setSpeed(100);
  myMotor2->run(FORWARD);
  delay(2000);

  myMotor2->run(RELEASE);
  delay(3000);
}
