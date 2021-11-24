const int LEDPIN = 14;   //LED circuit is on PA14
const int MOTORPIN = 4;   //Motor circuit is on PA04
const int SIGNALPIN = 3;   //Signal circuit is on PA03
float SIGNAL =0;

void setup() {
Serial.begin(9600);
pinMode(LEDPIN, OUTPUT);   //LED circuit is on PA14
pinMode(MOTORPIN, OUTPUT);   //Motor circuit is on PA04
pinMode(SIGNALPIN, INPUT);   //Singal circuit is on PA03
}

void loop() {
  int delayPeriod = 100;   //units of ms
  digitalWrite(LEDPIN, HIGH);
  delay(delayPeriod);
  digitalWrite(LEDPIN, LOW);
  delay(delayPeriod);
  digitalWrite(MOTORPIN, HIGH);
  SIGNAL = digitalRead(SIGNALPIN);
//  Serial.println(SIGNAL);
   if (SIGNAL > 1){
    digitalWrite(MOTORPIN, HIGH);
   }
   if (SIGNAL < 1) {
    digitalWrite(MOTORPIN, LOW);
   }
}
