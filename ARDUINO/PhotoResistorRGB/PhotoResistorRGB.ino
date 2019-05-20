int red = 2;
int grn = 4;
int blu = 6;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);  
  pinMode(6, OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if (sensorValue > 550) {
      digitalWrite(red, LOW);
      digitalWrite(grn, HIGH);
      digitalWrite(blu, HIGH);
  } 
  
  if (sensorValue < 550 && sensorValue >  250){
      digitalWrite(red, HIGH);
      digitalWrite(grn, LOW);
      digitalWrite(blu, HIGH);
  } 
  
  if (sensorValue < 250 ) {
      digitalWrite(red, HIGH);
      digitalWrite(grn, HIGH);
      digitalWrite(blu, LOW);
  } 
  
  delay(1000);
}
