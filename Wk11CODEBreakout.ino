//Pin Designations
const int HallEffectSensor = 5;   //Hall Effect Sensor Output is on PA05
const int LEDPIN = 2;   //LED circuit is on PA2
const int SIGNAL = 15;   //Transmit signal is sent from PA15
int HallEffectOutput = 0;    

//Setup
void setup() {
  Serial.begin(9600); 
  pinMode(HallEffectOutput, INPUT);   //Hall Effect Sensor circuit is on PA05
  pinMode(LEDPIN, OUTPUT);   //LED circuit is on PA2
  pinMode(SIGNAL, OUTPUT);   //Transmit signal is sent from PA15
  analogReadResolution(10);  //bits used by ADC
}

void loop() {
    int delayPeriod = 100;   //units of ms
    digitalWrite(LEDPIN, HIGH);
    delay(delayPeriod);
    digitalWrite(LEDPIN, LOW);
    delay(delayPeriod);
    HallEffectOutput = analogRead(HallEffectSensor)-809;
    Serial.println(abs(HallEffectOutput));
    delay(50);
    if (abs(HallEffectOutput) < 200){
      digitalWrite(SIGNAL, HIGH);
    }
    if (abs(HallEffectOutput) > 200) {
      digitalWrite(SIGNAL, LOW);
    }
}
