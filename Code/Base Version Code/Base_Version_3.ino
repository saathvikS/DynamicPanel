//Initializing the servo
#include <Servo.h>
#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
// Servo_Horizontal is responsible for moving from side to side (x-axis)
Servo myServo_Horizontal;
// Servo_Vertical is responsible for moving from up to down (y-axis)
Servo myServo_Vertical;
void setup() {
  // Attaching servos to pins
  Serial.begin(9600);
  myServo_Vertical.attach(10);
  myServo_Horizontal.attach(9);
}
// Setting up the Photoresistors
int middlePhotoResistor = A0;
// Making the function that readjusts itself to face the light
void readjust(int degree_vert, int degree_hori){
  // What we do is move once in the x direction, and then  once in the y direction
  // Then we repeat the above 15 times, homing in to find the best angle
  // We set the "degree", or how much the motor changes per movement, to 10
  // We couldn't set the degree too low (meaning more fine movements)or the photoresistor wouldn't have been able to detect the minute differences in light when it changes the angle
  int degree_Vertical = degree_vert;
  int degree_horizontal = degree_hori;
  // Here we repeate the movement of the Horizontal and Vertical motors 20 times
  for (int i = 0; i < 10; i++){
    // So we first we move the Horizontal Motor, changing the horizontal degree
    for (int i = 0; i < 3; i++){
      // Here, we set the past value of past Horizontal equal to the value of the photoresistor (how much light the photoresistor senses)
      // I measure multiple values of the PhotoResistor to make it more accurate
      float past_Horizontal = (analogRead(middlePhotoResistor) + analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+analogRead(middlePhotoResistor) + analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor))/5;
      // I then "write", or move, the motor in a certain direction
      // Initially the direction is arbitrary
      myServo_Horizontal.write(myServo_Horizontal.read()+degree_horizontal);
      delay(200);
      // We then measure the Photoresistor (think "light") again, and then based on it we change the direction of which the motor moves:
      // If the light decreased, that means we are going in the wrong direction so consequently we change the direction
      // But if the light increased, that means that we are going in the correct direction and there is no need to change directions
      if ((analogRead(middlePhotoResistor) + analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+analogRead(middlePhotoResistor) + analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor))/5 < past_Horizontal){
        // Multiplying the degree by -1 essentially changes the direction
        degree_horizontal = degree_horizontal * -1;
      }
    }
    // Here, we repeat the same process as above, but for the Vertical Motor
    for (int i = 0; i < 3; i++){
      // I take the average of the photoresistor
      float past_Vertical = (analogRead(middlePhotoResistor) + analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+analogRead(middlePhotoResistor) + analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor))/5;
      // We  move the motor in a direction, intially it is random
      myServo_Vertical.write(myServo_Vertical.read()+degree_Vertical);
      delay(200);
      // We then measure the light a second time, and then change directions based on that
      if ((analogRead(middlePhotoResistor) + analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+analogRead(middlePhotoResistor) + analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor)+ analogRead(middlePhotoResistor))/5 < past_Vertical){
        degree_Vertical = degree_Vertical * -1;
      }
    }
  }
  // As a reminder, we do this movement a total of 20 times
}
void loop() {
  // Here we call the function to autoadjust
  readjust(10, 10);
  // We then delay for a bit, and then autoadjust again
  // In real life ideally we would ajust every 30 minutes or so, but for the dem we adjust every few seconds
  delay(1000);
}
