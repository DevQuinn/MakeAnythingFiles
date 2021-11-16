const int LEDPIN = 23;   //LED circuit is on PA14
const int BUTTONPIN = 5;   //BUTTON circuit is on PA05
int BUTTONstate = 0;


void setup() {
  Serial.begin(9600);
  pinMode(LEDPIN, OUTPUT);   //LED circuit is on PA14
  pinMode(BUTTONPIN, INPUT);   //BUTTON circuit is on PA05
}

void loop() {
  BUTTONstate = digitalRead(BUTTONPIN);
    if(BUTTONstate == HIGH)
      delay(50);      //added to remove initialbutton bounce
      {digitalWrite(LEDPIN, LOW);
      Serial.println("OFF");}
    if(BUTTONstate == LOW)
      {digitalWrite(LEDPIN, HIGH);
      Serial.println("ON");}
}
