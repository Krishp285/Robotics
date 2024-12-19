const int trigpin = 8;
const int echopin = 9;
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 7;
int distance;
float time;

void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);

  time = pulseIn(echopin,HIGH);
  
  distance = time * 0.34/2;
  
  if(distance<200)
  {
  	digitalWrite(led1,HIGH);
  }
  else
  {
  digitalWrite(led1,LOW);
  }
  if(distance>=200 && distance<400)
  {
  	digitalWrite(led2,HIGH);
  }
  else
  {
  digitalWrite(led2,LOW);
  }
  if(distance>=400 && distance<600)
  {
  	digitalWrite(led3,HIGH);
  }
  else
  {
  digitalWrite(led3,LOW);
  }
  if(distance>=600 && distance<800)
  {
  	digitalWrite(led4,HIGH);
  }
  else
  {
  digitalWrite(led4,LOW);
  }
  if(distance>=800 && distance<1000)
  {
  	digitalWrite(led5,HIGH);
  }
  else
  {
  digitalWrite(led5,LOW);
  }
}
