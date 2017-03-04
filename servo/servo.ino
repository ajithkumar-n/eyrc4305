#include <Servo.h>
Servo servo1;  
int pos=0;      // create servo object to control a servo
void setup()
{
  servo1.attach(10);    // attaches the servo on pin 11 to the servo object   
  
}
void loop()
{ 
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }                                       // waits 10ms for the servo to reach the position
  }
