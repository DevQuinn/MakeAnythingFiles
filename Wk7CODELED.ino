const int LEDPIN = 14;   //LED circuit is on PA14
const int BUTTONPIN = 5;   //BUTTON circuit is on PA05


void setup() {
Serial.begin(9600);
pinMode(LEDPIN, OUTPUT);   //LED circuit is on PA14
pinMode(BUTTONPIN, INPUT);   //BUTTON circuit is on PA05
}

void loop() {
  int delayPeriod = 1000;   //units of ms
  digitalWrite(LEDPIN, HIGH);
  delay(delayPeriod);
  digitalWrite(LEDPIN, LOW);
  delay(delayPeriod);

  Serial.println(delayPeriod);


//if(digitalRead(BUTTON)==LOW)
  //return
//if(digitalRead(BUTTON)==HIGH)
  
}
