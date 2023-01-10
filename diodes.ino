boolean flag = 0;
boolean butt;
boolean led_flag = 0;
unsigned long press;
void setup() {
  pinMode(3, INPUT_PULLUP);
  pinMode(6, OUTPUT);
  }

void loop() {
  butt = !digitalRead(3);
  Serial.println(digitalRead(6));
  if(butt == true && led_flag == false && millis() - press > 50) {
    led_flag = true;
    flag = !flag;
    press = millis();
    
    digitalWrite(6, flag);
  }
  if(butt == false && led_flag == true) {
    led_flag = false;
  }
}