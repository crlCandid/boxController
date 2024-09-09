const int inputs[5] = {30,31,32,33,34};
void setup() {
  for(int i : inputs){
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }

}

void loop() {
}