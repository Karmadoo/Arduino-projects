const int trigPin = 13;
const int echoPin = 12;
long dauration;
byte curNum = 0;

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
//int distance;
//const int buzzerPin = 11;
void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  for(int i = 2; i<= 9; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  dauration = pulseIn(echoPin, HIGH);
  //dauration = dauration * 0.034 / 2;
  dauration = map(dauration, 300, 2580, 0, 9);
  dauration = constrain(dauration, 0, 9);
  for(int i = 2; i <= 8; i++){
    digitalWrite(i, bitRead(digits[dauration], i - 2));
    delay(100);
  } 
  /*tone(buzzerPin, dauration * 100);
  delay(100);
  noTone(buzzerPin);*/
  Serial.print("Distance ");
  Serial.println(dauration);
  delay(500);

  
}
