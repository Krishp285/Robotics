const int trigpin =8;
const int echopin = 10;
int distance;
long time;
void setup()
{
	pinMode(trigpin,OUTPUT);
    pinMode(echopin,OUTPUT);
    Serial.begin(9600);
}
void loop()
{
	digitalWrite(trigpin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigpin,HIGH);
    delayMicroseconds(2);
    digitalWrite(trigpin,LOW);
    time = pulseIn(echopin,HIGH);
    distance = time * 0.34/2;
    Serial.println(distance);
}