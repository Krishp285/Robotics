const int pirPin = 2;  
const int ledPin = 13; 


int pirState = LOW;    
int val = 0;           

void setup() {
  pinMode(pirPin, INPUT);  
  pinMode(ledPin, OUTPUT); 

 
  Serial.begin(9600);
}

void loop() {
 
  val = digitalRead(pirPin);

  if (val == HIGH) {
    
    digitalWrite(ledPin, HIGH);

    
    if (pirState == LOW) {
      Serial.println("Motion detected!");
      pirState = HIGH;  
    }
  } else {
    // Turn off the LED (optional)
    digitalWrite(ledPin, LOW);

    
    if (pirState == HIGH) {
      Serial.println("Motion ended!");
      pirState = LOW;  
    }
  }
}