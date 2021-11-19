const int SERVOstate = 23;   //Servo connected to analog PA23
int LoopCount = 50;
float i = 0;

void setup() {
  Serial.begin(9600);
  pinMode(SERVOstate, OUTPUT);   //Servo is driven by MCU output
}

void loop() {
  for(i = 0; i < LoopCount; ++i){
    digitalWrite(SERVOstate, HIGH);
    delay(1);
    digitalWrite(SERVOstate, LOW);
    delay(19);}
  for(i = 0; i < LoopCount; ++i){
    digitalWrite(SERVOstate, HIGH);
    delay(1.25);
    digitalWrite(SERVOstate, LOW);
    delay(18.75);}
  for(i = 0; i < LoopCount; ++i){
    digitalWrite(SERVOstate, HIGH);
    delay(1.5);
    digitalWrite(SERVOstate, LOW);
    delay(18.5);}
  for(i = 0; i < LoopCount; ++i){
    digitalWrite(SERVOstate, HIGH);
    delay(1.75);
    digitalWrite(SERVOstate, LOW);
    delay(18.25);}
  for(i = 0; i < LoopCount; ++i){
    digitalWrite(SERVOstate, HIGH);
    delay(2);
    digitalWrite(SERVOstate, LOW);
    delay(19);}
}
