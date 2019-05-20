
int spk = 11;

void setup() {
  pinMode(spk, OUTPUT);

}

void loop() {
  tone(spk, 5000, 500);

}
