# define potentciometr 0
# define pin1 5
# define pin2 6
# define pin3 7
# define pin4 8
# define pin5 9

int val;
void setup() {
  Serial.begin(9600);
  }

void loop() {
  val = analogRead(potentciometr);
  val = map(val, 0, 1023, 0, 5);
  val = constrain(val, 0, 5);
  Serial.println(val);

  if(val == 1){
    digitalWrite(pin1, 1);
    digitalWrite(pin2, 0);
    digitalWrite(pin3, 0);
    digitalWrite(pin4, 0);
    digitalWrite(pin5, 0);
  }
  else if(val == 2){
    digitalWrite(pin1, 1);
    digitalWrite(pin2, 1);
    digitalWrite(pin3, 0);
    digitalWrite(pin4, 0);
    digitalWrite(pin5, 0);
  }
  else if(val == 3){
    digitalWrite(pin1, 1);
    digitalWrite(pin2, 1);
    digitalWrite(pin3, 1);
    digitalWrite(pin4, 0);
    digitalWrite(pin5, 0);
  }
  else if(val == 4){
    digitalWrite(pin1, 1);
    digitalWrite(pin2, 1);
    digitalWrite(pin3, 1);
    digitalWrite(pin4, 1);
    digitalWrite(pin5, 0);
  }
  else if(val == 5){
    digitalWrite(pin1, 1);
    digitalWrite(pin2, 1);
    digitalWrite(pin3, 1);
    digitalWrite(pin4, 1);
    digitalWrite(pin5, 1);
  }
  else if(val == 0){
    digitalWrite(pin1, 0);
    digitalWrite(pin2, 0);
    digitalWrite(pin3, 0);
    digitalWrite(pin4, 0);
    digitalWrite(pin5, 0);
  }

}