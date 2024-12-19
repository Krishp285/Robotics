int buzz = 9;
void setup()
{
 pinMode(buzz,OUTPUT);
}
void loop()
{
	tone(buzz,1000);//frequency = 1000
    delay(500);
    noTone(buzz);
    delay(500);
  
}

  // void loop() 
  // {
  // tone(9, 650, 750);
  //   delay(400);
  // tone(9,950);
  //   delay(400);
  // }
