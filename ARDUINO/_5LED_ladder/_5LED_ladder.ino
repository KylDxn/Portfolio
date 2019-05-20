/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int red = 3;
int yel = 5;
int grn = 6;
int blu = 9;
int whi = 10;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);
  pinMode(red, OUTPUT);     
  pinMode(yel, OUTPUT);     
  pinMode(grn, OUTPUT);     
  pinMode(blu, OUTPUT);     
  pinMode(whi, OUTPUT);     
  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(red, HIGH);
  digitalWrite(yel, LOW);
  digitalWrite(grn, LOW);
  digitalWrite(blu, LOW);
  digitalWrite(whi, LOW);
  Serial.println(5);
  Serial.println(5);
  Serial.println(5);
  Serial.println(5);
  Serial.println(5);
  Serial.println(5);
  Serial.println(5);
  Serial.println(5);
  Serial.println(5);
  Serial.println(5);
  delay(500);
  digitalWrite(red, HIGH);
  digitalWrite(yel, HIGH);
  digitalWrite(grn, LOW);
  digitalWrite(blu, LOW);
  digitalWrite(whi, LOW);
  Serial.println(10);
  Serial.println(10);
  Serial.println(10);
  Serial.println(10);
  Serial.println(10);
  Serial.println(10);
  Serial.println(10);
  Serial.println(10);
  Serial.println(10);
  Serial.println(10);
  delay(500);
  digitalWrite(red, HIGH);
  digitalWrite(yel, HIGH);
  digitalWrite(grn, HIGH);
  digitalWrite(blu, LOW);
  digitalWrite(whi, LOW);
  Serial.println(15);
  Serial.println(15);
  Serial.println(15);
  Serial.println(15);
  Serial.println(15);
  Serial.println(15);
  Serial.println(15);
  Serial.println(15);
  Serial.println(15);
  Serial.println(15);
  delay(500);
  digitalWrite(red, HIGH);
  digitalWrite(yel, HIGH);
  digitalWrite(grn, HIGH);
  digitalWrite(blu, HIGH);
  digitalWrite(whi, LOW);
  Serial.println(20);
  Serial.println(20);
  Serial.println(20);
  Serial.println(20);
  Serial.println(20);
  Serial.println(20);
  Serial.println(20);
  Serial.println(20);
  Serial.println(20);
  Serial.println(20);
  delay(500);
  digitalWrite(red, HIGH);
  digitalWrite(yel, HIGH);
  digitalWrite(grn, HIGH);
  digitalWrite(blu, HIGH);
  digitalWrite(whi, HIGH);
  Serial.println(25);
  Serial.println(25);
  Serial.println(25);
  Serial.println(25);
  Serial.println(25);
  Serial.println(25);
  Serial.println(25);
  Serial.println(25);
  Serial.println(25);
  Serial.println(25);
  delay(500);
  digitalWrite(red, LOW);
  digitalWrite(yel, LOW);
  digitalWrite(grn, LOW);
  digitalWrite(blu, LOW);
  digitalWrite(whi, LOW);
  Serial.println(0);
  Serial.println(0);
  Serial.println(0);
  Serial.println(0);
  Serial.println(0);
  Serial.println(0);
  Serial.println(0);
  Serial.println(0);
  Serial.println(0);
  Serial.println(0);
  delay(500);    
}
