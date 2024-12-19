int potpin = A0;
int potvalue;
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;
int led9 = 5;
int led10 = 4;

void setup()
{
pinMode(potpin,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(led9,OUTPUT);
pinMode(led10,OUTPUT);
Serial.begin(9600);
}
void loop()
{
potvalue = analogRead(A0);
if(potvalue<100)
{
digitalWrite(led1,HIGH);
}
else
{
digitalWrite(led1,LOW);
}
potvalue = analogRead(A0);
if(potvalue>=100 && potvalue<200)
{
digitalWrite(led2,HIGH);
}
else
{
digitalWrite(led2,LOW);
}
potvalue = analogRead(A0);
if(potvalue>=200 && potvalue<300)
{
digitalWrite(led3,HIGH);
}
else
{
digitalWrite(led3,LOW);
}
potvalue = analogRead(A0);
if(potvalue>=300 && potvalue<400)
{
digitalWrite(led4,HIGH);
}
else
{
digitalWrite(led4,LOW);
}
potvalue = analogRead(A0);
if(potvalue>=400 && potvalue<500)
{
digitalWrite(led5,HIGH);
}
else
{
digitalWrite(led5,LOW);
}
potvalue = analogRead(A0);
if(potvalue>=500 && potvalue<600)
{
digitalWrite(led6,HIGH);
}
else
{
digitalWrite(led6,LOW);
}
potvalue = analogRead(A0);
if(potvalue>=600 && potvalue<700)
{
digitalWrite(led7,HIGH);
}
else
{
digitalWrite(led7,LOW);
}
potvalue = analogRead(A0);
if(potvalue>=700 && potvalue<800)
{
digitalWrite(led8,HIGH);
}
else
{
digitalWrite(led8,LOW);
}
potvalue = analogRead(A0);
if(potvalue>=800 && potvalue<900)
{
digitalWrite(led9,HIGH);
}
else
{
digitalWrite(led9,LOW);
}
potvalue = analogRead(A0);
if(potvalue>=900 && potvalue<1000)
{
digitalWrite(led10,HIGH);
}
else
{
digitalWrite(led10,LOW);
}
potvalue = analogRead(A0);
  
Serial.println(potvalue);
}