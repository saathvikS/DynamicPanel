//Initializing everything
#include <Servo.h>
#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
hd44780_I2Cexp lcd;
Servo myServo_Vertical;
Servo myServo_Horizontal;
void setup() {
  // Initializing the Vertical motor and the Horizontal Motor
  Serial.begin(9600);
  myServo_Vertical.attach(10);
  myServo_Horizontal.attach(9);
}
// Initializing the Photoresistors
int leftPhotoResistor = A2;
int rightPhotoResistor = A3;
int topPhotoResistor = A4;
int bottomPhotoResistor = A5;
// Readjust adjusts the position of the solar panel to face the source of light
void readjust(){
  //Shows how much each motor should move during each "movement"
  int degree_Vertical = 10;
  int degree_Horizontal = 10;
  // Repeats the process of moving the motors  25 times
  for (int i = 0; i < 25; i++){
    // First check the top and bottom photoresistors
    // Takes multiple measurements to ensure accuracy
    int top = analogRead(topPhotoResistor) + analogRead(topPhotoResistor) + analogRead(topPhotoResistor) + analogRead(topPhotoResistor) + analogRead(topPhotoResistor);
    int bottom = analogRead(bottomPhotoResistor) + analogRead(bottomPhotoResistor) + analogRead(bottomPhotoResistor) + analogRead(bottomPhotoResistor) + analogRead(bottomPhotoResistor);
    // If the top photoresistor recieves more light then the bottom, then that means we move the solar panel "towards" the top photoresistor
    // This tilts the solar panel in a better angle to maximize the light it recieves
    if (top > bottom){
      myServo_Vertical.write(myServo_Vertical.read() + degree_Vertical);
    }
    // If bottom is more then the top, then we move it in the opposite direction, towards the bottom photoresistor (which is recieving more light)
    else{
      myServo_Vertical.write(myServo_Vertical.read() - degree_Vertical);
    }
    // Then we repeat the same process for the left and right photoresistors
    int left = analogRead(leftPhotoResistor) + analogRead(leftPhotoResistor) + analogRead(leftPhotoResistor) + analogRead(leftPhotoResistor) + analogRead(leftPhotoResistor);
    int right = analogRead(rightPhotoResistor) + analogRead(rightPhotoResistor) + analogRead(rightPhotoResistor) + analogRead(rightPhotoResistor) + analogRead(rightPhotoResistor);
    // We tilt the solar panel towards the photoresistor that has the most light
    if (right > left){
      myServo_Horizontal.write(myServo_Horizontal.read() + degree_Horizontal);
    }
    else{
      myServo_Horizontal.write(myServo_Horizontal.read() - degree_Horizontal);
    }
    delay(75);
  }
}
void loop() {
  // This just adjusts the solar panel
  readjust();
  delay(10000);
}
