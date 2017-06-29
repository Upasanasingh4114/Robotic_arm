#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9;

//=====================================================================================================================================================================//
//angles.........0...0...90...90...0...0
// first preference is always given to right servo
//=====================================================================================================================================================================//
int a1 = 0; //wrist
int a2 = 0; //wrist
int a3 = 90; //elbow
int a4 = 90; //elbow
int a5 = 0; //shoulder
int a6 = 0; //base8

void setup(){
  servo1.attach(1);
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);
  servo5.attach(5);
  servo6.attach(6);
  servo7.attach(7);
  servo8.attach(8);
  servo9.attach(9);
}

void loop(){
  servo1.write(a1);
  servo2.write(a2);
  servo3.write(a3);
  servo4.write(a3);
  servo5.write(a4);
  servo6.write(a4);
  servo7.write(a5);
  servo8.write(a5);
  servo9.write(a6);
}
