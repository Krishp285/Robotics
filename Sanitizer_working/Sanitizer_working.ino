#include<Servo.h>
Servo s1;
int trigpin=8;
int echopin=10;
int time;
int distance;
int count = 0;

void setup(){
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  s1.attach(11);
  Serial.begin(9600);
}

void loop()
{
  distance=measuredistance();
  if(distance <100)
  {
    count++;
      if(count == 1)
      {
      sanitizer();
      }
  }
  else
  {
    count =0;
  }
}

void sanitizer()
{
 for(int i=0;i<=90;i++)
    {
      s1.write(i);
      delay(20);
    }
    
    for(int i=90;i>=0;i--)
    {
      s1.write(i);  
      delay(20);
    } 
}

int measuredistance(){
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  
  time=pulseIn(echopin,HIGH);
  
  distance=time*0.34/2;
  
  return distance;
}