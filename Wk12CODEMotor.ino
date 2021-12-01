const int POTPIN = 2;   //POTENTIOMETER circuit is on PA2
const int MOSFETPIN = 4;   //Motor circuit is on PA04
int val =0;

void setup() {
Serial.begin(9600);
pinMode(POTPIN, INPUT);   //POTENTIOMETER circuit is on PA2
pinMode(MOSFETPIN, OUTPUT);   //Motor circuit is on PA04
}

void loop() {
  val = analogRead(POTPIN);    //Read POTENTIOMETER input
  delay(10);
  Serial.println(val / 4);     //Print POTENTIOMETER value
  analogWrite(MOSFETPIN, val / 4);
}
