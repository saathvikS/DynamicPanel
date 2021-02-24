# DynamicPanel
![alt text](https://github.com/saathvikS/DynamicPanel/blob/main/Pictures/DynamicPanel%20Logo-01.png "DynamicPanel")

> A prototype device engineered to increase solar panel efficieny and harvest more energy

---

### Table of Contents

- [Description](#Description)
- [Project Demo](#Project-Demo)
- [How to use](#How-To-Use)
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
## Instructions

First set up the Breadboard and Arduino Uno like this:
Then build a cardboard tower which is where the motors will rest on top
Add a base on the tower and then glue a servo motor - we will call this the horizontal motor - on the base, with the propellors facing upwards
Glue cardboard on the propellors of the horizontal motor - this will be the base for the second motor
Add a small secondary tower slightly to the left of the center of the base for the second motor 
We did this with coins, but cardboards works fine as well
We make it to the left is so when we glue the motor on the secondary tower, its axis of rotation is directly in line with the horizontal motor, which will make it more accurate
Glue the other motor - we will call this the vertical motor - on the secondary tower, with its propeller facing toward the center of the first tower
Glue cardboard on the propellors of the vertical motor
If you want to make it more realistic, then glue a picture of a solar panel on the cardboard of the vertical motor
Then download the code (pick on of the first three files)
Turn on a light source, as see how it accurately tracks the source of light!

---

## Extra Add-ons

Instead of adding only one resistor, you can add four, as seen in this picture!
This will make the tracking ability much more accurate and smooth
If you decide to make one with four resistors, then you can download the code of the last file, which is able compatable with four resistors
If you like coding, we highly reccomend you to try to code the software for yourself and use ours as a guide - and maybe you can even improve our code and add on features!
Some features you could add are if the tracker can see if it is already in the best position, and then stop moving
Or you could make the motors movements finer and finer as it approaches the maximal angle

---
## Authors

#### Saathvik Somujayabalan
#### Rithvik Koppolu
