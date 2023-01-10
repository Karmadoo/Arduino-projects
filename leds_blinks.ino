int potenciometr = 0;
int timer = 200;
int pins[] = {5, 6, 7, 8, 9};
int pinsQty = 5;
int val;
void setup() {
  Serial.begin(9600);
  }

void loop() {
  val = analogRead(potenciometr);
  val = map(val, 0, 1023, 0, 5);
  val = constrain(val, 0, 5);
  Serial.println(val);
  //for (int i = 0; i < pins.lenght; i++)
  /*if(val == 1){
    blinking(pins[0]);
    light(pins[1]);
    light(pins[2]);
    light(pins[3]);
    light(pins[4]);
  }
  else if(val == 2){
    light(pins[0]);
    blinking(pins[1]);
    light(pins[2]);
    light(pins[3]);
    light(pins[4]);
  }
  else if(val == 3){
    light(pins[0]);
    light(pins[1]);
    blinking(pins[2]);
    light(pins[3]);
    light(pins[4]);
  }
  else if(val == 4){
    light(pins[0]);
    light(pins[1]);
    light(pins[2]);
    blinking(pins[3]);
    light(pins[4]);
  }
  else if(val == 5){
    light(pins[0]);
    light(pins[1]);
    light(pins[2]);
    light(pins[3]);
    blinking(pins[4]);
  }*/
  //else if(val == 0){
  for(int i = 0; i < val - 1; i++){
    Serial.println(i);
    light(pins[i]);
    delay(timer);
    off(pins[i]);
    delay(timer);
    }
  for(int i = val - 1; i > 0; i--){
    Serial.println(i);
    light(pins[i]);
    delay(timer);
    off(pins[i]);
    delay(timer);
  }
}

void blinking(int pin){
  digitalWrite(pin, 1);
  delay(timer);
  digitalWrite(pin, 0);
  delay(timer);
}

void light(int pin){
  digitalWrite(pin, 1);
}

void off(int pin){
  digitalWrite(pin, 0);
}