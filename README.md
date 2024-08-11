# Robot Face LED Matrix Display

This project animates a robot face on an 8x8 LED matrix using an Arduino. The face displays three different expressions: neutral, happy, and sad.

https://github.com/user-attachments/assets/bd55e525-9b47-4d6a-bd87-770657671f2e



## Components

- Arduino Uno 
- 8x8 LED Matrix and MAX7219 LED driver

## Wiring

Connect the 8x8 LED matrix to the Arduino:

- DIN (Data In) -> Pin 11
- CS (Chip Select) -> Pin 7
- CLK (Clock) -> Pin 13


## Code

### Functions

- `displayNeutralFace()`: Shows the neutral expression (straight mouth).
- `displayHappyFace()`: Shows the happy expression (smiling mouth).
- `displaySadFace()`: Shows the sad expression (frowning mouth).

The eyes are represented as simple dots on the matrix.


## Steps:

1. Upload the code to your Arduino
2. Connect the Arduino to your LED matrix
3. The LED matrix will display the robot's face, cycling through neutral, happy, and sad expressions every second


You can find the code here: [code.ino](./code.ino)
