#include<AFMotor.h>
#include<SoftwareSerial.h>
SoftwareSerial bluetoothSerial(0,1);

AF_DCMotor motor1(1,MOTOR12_1KHZ);
AF_DCMotor motor2(2,MOTOR12_1KHZ);
AF_DCMotor motor3(3,MOTOR34_1KHZ);
AF_DCMotor motor3(4,MOTOR34_1KHZ);

char command;
void setup() 
{
  bluetoothSerial.begin(9600);
}

void loop() {
  if(bluetoothSerial.available()>0){
    command = bluetoothSerial.read();
    
    stop();
    switch(command)
    {
      case 'w': forward();
                break;
      case 's': backward();
                break;
      case 'd': right();
                break;
      case 'a': left();
                break;
    }

  }
}

void forward(){
  motor1.setspeed(255);
  motor1.run(FORWARD);
  motor2.setspeed(255);
  motor2.run(FORWARD);
  motor3.setspeed(255);
  motor3.run(FORWARD);
  motor4.setspeed(255);
  motor4.run(FORWARD);
}

void backward(){
  motor1.setspeed(255);
  motor1.run(BACKWARD);
  motor2.setspeed(255);
  motor2.run(BACKWARD);
  motor3.setspeed(255);
  motor3.run(BACKWARD);
  motor4.setspeed(255);
  motor4.run(BACKWARD);
}
void right(){
  motor1.setspeed(255);
  motor1.run(FORWARD);
  motor2.setspeed(255);
  motor2.run(FORWARD);
  motor3.setspeed(255);
  motor3.run(BACKWARD);
  motor4.setspeed(255);
  motor4.run(BACKWARD);
}
void left(){
  motor1.setspeed(255);
  motor1.run(BACKWARD);
  motor2.setspeed(255);
  motor2.run(BACKWARD);
  motor3.setspeed(255);
  motor3.run(FORWARD);
  motor4.setspeed(255);
  motor4.run(FORWARD);
}
void stop(){
  motor1.setspeed(0);
  motor1.run(RELEASE);
  motor2.setspeed(0);
  motor2.run(RELEASE);
  motor3.setspeed(0);
  motor3.run(RELEASE);
  motor4.setspeed(0);
  motor4.run(RELEASE);
}