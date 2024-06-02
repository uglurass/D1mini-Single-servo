/*

 Example of a simple servo project using wemos d1 mini clone with usb-c 
Ásgeir Örn Loftsson 
   important to note if nothing happens.
   did you use the correct format naming GPIO04 and D3 for example work  
   analog servos use 50hz and i thing servo.h has it as default
   what range is your servo capable of. 180degrees maybe 360...


#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(2);  // attaches the servo on gpio02 wemos d1 mini 

void loop() {

  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15 ms for the servo to reach the position
  }
}
