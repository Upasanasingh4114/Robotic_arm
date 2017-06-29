#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int a1 = 0;
int a2 = 0;
int a3 = 0;
int a4 = 0;
int a5 = 0;
int a6 = 0;

void setup(){
  servo1.attach(1);
  servo1.attach(2);
  servo1.attach(3);
  servo1.attach(4);
  servo1.attach(5);
  servo1.attach(6);
}

void loop(){
  servo1.write(a1);
  servo1.write(a2);
  servo1.write(a3);
  servo1.write(a4);
  servo1.write(a5);
  servo1.write(a6);
}
