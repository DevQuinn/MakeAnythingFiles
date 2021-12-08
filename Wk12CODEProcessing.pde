import processing.serial.*;
Serial myPort;
String sensorReading = "";
float sensorFloat = 1023/2;
PImage img;
int x, moveSpeed = 25;
 
void setup() {
  size(1000, 300); //creates window size
  background(0);  //sets background to black
  img = createImage(10000, 200, RGB);  //creates image size
  for (int i=0; i<img.pixels.length; i++) {
    img.pixels[i] = color(i%img.width%255, 255, i/img.width%255);  //defines image pixel coloring
  }
  x = -(img.width-width)/2; // starts in middle of pixel image
  myPort = new Serial(this, "COM12", 9600);  //my device connects to port COM12
}
 
void draw() {
  float potentiometer = sensorFloat;
  float movement = map(potentiometer, 0, 1023, -moveSpeed, moveSpeed); // map from range (0, 1023) to (-moveSpeed, moveSpeed)
  x += movement; // add movement to location
  x = constrain(x, -(img.width-width), 0); //sets movement along the x-axis 
  image(img, x, 50); //placespixel image in  center of window
  fill(0);
}
 
void serialEvent (Serial myPort){
 sensorReading = myPort.readStringUntil('\n');
  if(sensorReading != null){
    sensorReading = trim(sensorReading);
    sensorFloat = float(sensorReading);
    println(sensorReading);
  }
}
