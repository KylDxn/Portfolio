/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int red = 2;
int grn = 4;
int blu = 6;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);  
  pinMode(6, OUTPUT);  
  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(red, LOW);
  digitalWrite(grn, HIGH);
  digitalWrite(blu, HIGH);
  delay(125);
  digitalWrite(red, HIGH);
  digitalWrite(grn, LOW);
  digitalWrite(blu, HIGH);
  delay(125);
  digitalWrite(red, HIGH);
  digitalWrite(grn, HIGH);
  digitalWrite(blu, LOW);
  delay(125);
  
  
}
