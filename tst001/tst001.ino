const int inputs[8] = {30,31,32,33,34,35,36, 37};

const int IO = 30;
const int C001 = 31;
const int C002 = 32;
const int C003 = 33;
const int C004 = 34;
const int C005 = 35;
const int C006 = 36;
const int C007 = 37;

int active = 0;
int receivedInt = 0;

void setup() {
  Serial.begin(9600);  
  pinMode(LED_BUILTIN, OUTPUT);
  for(int i : inputs){
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
}

void loop() {
  if (Serial.available() > 0) {
    receivedInt = Serial.parseInt();
  }else{
    return;
  }

  Active(receivedInt);
  delay(1000);
  Deactive();
  delay(1000);
}

void Active(int target){
  switch(target){
    case 1:
      active = C001;
      break;
    case 2:
      active = C002;
      break;
    case 3:
      active = C003;
      break;
    case 4:
      active = C004;
      break;
    case 5:
      active = C005;
      break;
    case 6:
      active = C006;
      break;
    case 7:
      active = C007;
      break;
  }
  digitalWrite(active, LOW);
  digitalWrite(IO, LOW);
}

void Deactive(){
  digitalWrite(active, HIGH);
  digitalWrite(IO, HIGH);
  active = 0;
}