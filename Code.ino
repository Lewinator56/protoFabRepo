void setup() {
  // initialize digital pin 13 as an output.
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3,INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop()
{
  int p = analogRead(3);
  digitalWrite(2, p > 100);
  analogWrite(1, p > 100 ? (int)(p/4.0): 0);
  
}
