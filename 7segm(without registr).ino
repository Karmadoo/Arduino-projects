byte digits[10] = {
  0b00111111, // 0
  0b00001100, // 1
  0b01011011, // 2
  0b01011110, // 3
  0b01101100, // 4
  0b01110110, // 5
  0b01110111, // 6
  0b00011100, // 7
  0b01111111, // 8
  0b01111110, // 9
};
byte curNum = 0;
void setup() {
  for(int i = 2; i<= 9; i++){
    pinMode(i, OUTPUT);
  }

}

void loop() {
  for(int i = 2; i <= 8; i++){
    digitalWrite(i, bitRead(digits[curNum], i - 2));
  }
  //delay(1000);
}
