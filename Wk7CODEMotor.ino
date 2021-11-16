const int LEDPIN = 14;   //LED circuit is on PA14
const int BUTTONPIN = 5;   //BUTTON circuit is on PA05
const int COIL1PIN = 15;   //COIL1 circuit is on PA15
const int COIL2PIN = 16;   //COIL1 circuit is on PA16
const int COIL3PIN = 22;   //COIL1 circuit is on PA22
int BUTTONstate = 0;
int EnergizedDuration = 100;


void setup() {
  Serial.begin(9600);
  pinMode(BUTTONPIN, INPUT);   //BUTTON circuit is on PA05
  pinMode(LEDPIN, OUTPUT);   //LED circuit is on PA14
  pinMode(COIL1PIN, OUTPUT);   //LED circuit is on PA15
  pinMode(COIL2PIN, OUTPUT);   //LED circuit is on PA16
  pinMode(COIL3PIN, OUTPUT);   //LED circuit is on PA22
}

void loop() {
  BUTTONstate = digitalRead(BUTTONPIN);
    if(BUTTONstate == HIGH)
      {
        digitalWrite(LEDPIN, LOW);
        digitalWrite(COIL1PIN, LOW);
        digitalWrite(COIL2PIN, LOW);
        digitalWrite(COIL3PIN, LOW);
        Serial.println("OFF");
      }
    if(BUTTONstate == LOW)
      {
        digitalWrite(LEDPIN, HIGH);
        digitalWrite(COIL1PIN, HIGH);
        digitalWrite(COIL2PIN, LOW);
        digitalWrite(COIL3PIN, LOW);
          delay(EnergizedDuration);
        digitalWrite(COIL1PIN, LOW);
        digitalWrite(COIL2PIN, HIGH);
        digitalWrite(COIL3PIN, LOW);
          delay(EnergizedDuration);
        digitalWrite(COIL1PIN, LOW);
        digitalWrite(COIL2PIN, LOW);
        digitalWrite(COIL3PIN, HIGH);
          delay(EnergizedDuration);
        Serial.println("ON");
      }
}
