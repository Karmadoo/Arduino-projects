# define int potenciometr = 0
int timer = 200;
int pins[] = {5, 6, 7, 8, 9};
int val;
void setup() {
  /*fot (int i = 0; i < pins.lenght; i++){
    pinmode
  }*/
  }

void loop() {
  val = analogRead(potentciometr);
  val = map(val, 0, 1023, 0, 5);
  val = constrain(val, 0, 5);
  Serial.println(val);
  //for (int i = 0; i < pins.lenght; i++)
  if(val == 1){
    blinking(pins[1])
    light(pins[2]);
    light(pins[3]);
    light(pins[4]);
    light(pins[5]);
  }
  else if(val == 2){
    light(pins[1])
    blinking(pins[2]);
    light(pins[3]);
    light(pins[4]);
    light(pins[5]);
  }
  else if(val == 3){
    light(pins[1])
    light(pins[2]);
    blinking(pins[3]);
    light(pins[4]);
    light(pins[5]);
  }
  else if(val == 4){
    light(pins[1])
    light(pins[2]);
    light(pins[3]);
    blinking(pins[4]);
    light(pins[5]);
  }
  else if(val == 5){
    light(pins[1])
    light(pins[2]);
    light(pins[3]);
    light(pins[4]);
    blinking(pins[5]);
  }
  /*else if(val == 0){
    digitalWrite(pin1, 0);
    digitalWrite(pin2, 0);
    digitalWrite(pin3, 0);
    digitalWrite(pin4, 0);
    digitalWrite(pin5, 0);
  }*/
}
void blinking(pin){
  digitalWrite(pin, 1);
  delay(300);
  digitalWrite(pin, 0);
  delay(300);
}

void light(pin){
  digitalWrite(pin, 1);
}

void off(pin){
  digitalWrite(pin, 0);
}