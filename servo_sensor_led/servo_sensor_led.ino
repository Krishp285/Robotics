#include<Servo.h>  
  Servo s1;
  int trig = 5, echo=4; 
  int time, distance , led1 = 3;
void setup()
{
  s1.attach(7);
  pinMode (trig, OUTPUT);
  pinMode (echo, INPUT);
  pinMode (3,OUTPUT);
  Serial.begin(9600);
  Serial.println("Connected!!!");
}

void loop()
{
  digitalWrite(trig, LOW);
  delay(1000);
  digitalWrite (trig, HIGH);
  delay(1000);
  digitalWrite (trig, LOW);
  time = pulseIn (echo, HIGH);
  distance = time * 0.034/2;
  Serial.println(distance);
  if (distance<100)
  {
     digitalWrite(led1,HIGH);
    delay(1000);
	for(int i = 0 ;i< 90 ;i++)
    {
    s1.write(i);
    delay(10);
    }
    delay(1000);
    for(int i = 90 ;i> 0 ;i--)
    {
    s1.write(i);
    delay(10);
    }
   
    
    
  }
  else
  {
  	s1.write(0);
    digitalWrite(led1,LOW);
    delay(1000);
    
  }
}
