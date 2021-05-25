/*
 * Jiyoon Seok May 25 2021
 * This code is for the servo motor project
 * It makes the servo motor creates a heart pulse.
 */

#include <Servo.h>

Servo servoMotor;       // creates an instance of the servo object to control a servo
int servoPin = 9;       // Control pin for servo motor
int servoAngle = 0;     // variable for changing the angle of the servo 0 - 180

int angles1[] = {55,125,20,145,60,130,40};
int angles2[] = {90,70,85,100,80,95,85};
int Size = 7;
void setup() {
  Serial.begin(9600);                // initialize serial communications
  servoMotor.attach(servoPin);       // attaches the servo on pin 3 to the servo object
} 
 
void loop() {
  
   for (int i = 0; i <Size; i = i + 1){
    servoMotor.write(angles2[i]);                 //set the angle of the servo to i
                 // switch direction at the max 180 degree point
      delay(50);                         // change the delay to speed up or slow down
                    // print i to the serial monitor to make sure the numbers are OK
   }  
    delay(1000);
 }
