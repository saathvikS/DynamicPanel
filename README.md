# DynamicPanel
![alt text](https://github.com/saathvikS/DynamicPanel/blob/main/Pictures/DynamicPanel%20Logo-01.png "DynamicPanel")

> A prototype device engineered to increase solar panel efficiency and harvest more energy

---

### Table of Contents

- [Description](#Description)
- [Project Demo](#Project-Demo)
- [How to build](#How-to-Build)
- [Extra Add-ons](#Extra-Add-ons)
- [Authors](#Authors)

---


## Description

Research has proven that solar panels that can move either on single or double axis solar panels can generate up to 40% more electricity when compared to
stationary solar panels. Although there are many working dual-axis solar panels, meaning they can tilt in any direction so that they are always pointed directly at the sun, 
there is a need to make a small, feasible solution to take to potential future colonies on Mars and the Moon. Introducing, DynamicPanel, equipped with one photoresistor, that is 
compact, feasible, and even has the option to upgrade to up to four photoresistors for maximum efficiency. DynamicPanel is prototyped with an Arduino UNO microcontroller and all 
wiring is through a breadboard but if a custom circuit board was made with just the necessary components along with soldering, our device can be made _even_ smaller and lighter.
The servo motors in this device are connected directly to each other, reducing the weight which is crucial to transport this to future colonies. DynamicPanel, paving the future 
of energy.

---

## Project Demo

[Video Demonstration](https://youtu.be/u812sUwD2QE)

---


#### Materials Used
   - Arduino Uno
   - Two Servo Motors
   - One Photoresistor
   - 10 kΩ resistor
   - Breadboard
   - Jumper Wires
   - Cardboard & Glue
---
## How to Build
1. Set up the Breadboard and Arduino Uno like this:
<img src="https://github.com/saathvikS/DynamicPanel/blob/main/Pictures/Schematic.png" width="200">
2. Then build a cardboard tower which is where the motors will rest on top
<img src="https://github.com/saathvikS/DynamicPanel/blob/main/Step1.jfif" width="200" height="200">
3. Add a base on the tower and then glue a servo motor- we will call this the horizontal motor - on the base, with the propellors facing upwards
<img src="https://github.com/saathvikS/DynamicPanel/blob/main/Step2.jfif" width="200" height="200">
4. Glue cardboard on the propellors of the horizontal motor - this will be the base for the second motor
<img src="https://github.com/saathvikS/DynamicPanel/blob/main/Step3.jfif" width="200" height="200">
5. Add a small secondary tower (we made it out of coins) slightly to the right of the center of the base for the second motor 
<img src="https://github.com/saathvikS/DynamicPanel/blob/main/Step4.jfif" width="200" height="200">
6. Glue the other motor - we will call this the vertical motor - on the secondary tower, with its propeller facing toward the center of the first tower
<img src="https://github.com/saathvikS/DynamicPanel/blob/main/Step5.jfif" width="200" height="200">
7. Glue cardboard on the propellors of the vertical motor
<img src="https://github.com/saathvikS/DynamicPanel/blob/main/Step6.jfif" width="200" height="200">
8. If you want to make it more realistic, then glue a picture of a solar panel on the cardboard of the vertical motor
<img src="https://github.com/saathvikS/DynamicPanel/blob/main/Step7.jfif" width="200" height="200">
9. Then download the code (pick one of the three files)
https://github.com/saathvikS/DynamicPanel/blob/main/Code/Base%20Version%20Code/Base_Version_1.ino
https://github.com/saathvikS/DynamicPanel/blob/main/Code/Base%20Version%20Code/Base_Version_2.ino
https://github.com/saathvikS/DynamicPanel/blob/main/Code/Base%20Version%20Code/Base_Version_3.ino
10. Turn on a light source, as see how it accurately tracks the source of light!

---

## Extra

Instead of adding only one resistor, you can add four, as seen in this picture!

This will make the tracking ability much more accurate and smooth.

If you decide to make one with four resistors, then you can download the code of the last file, which is able compatable with four resistors: 
https://github.com/saathvikS/DynamicPanel/blob/main/Code/Multi-Photoresistor%20Code/Multi-Photoresistors.ino

If you like coding, we highly recommend you to try to code the software for yourself and use ours as a guide - and maybe you can even improve our code and add on features!

Some features you could add: 

Tracking system that automatically stops when it detects that it is at the best position.

System that makes motor movements finer and finer as it approaches the maximial angle.

---
## Authors

#### Saathvik Somujayabalan
#### Rithvik Koppolu
