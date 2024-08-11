#include <LedControl.h>

int DIN = 11;
int CS = 7;
int CLK = 13;
LedControl lc = LedControl(DIN, CLK, CS, 1); // setting up for 1 display

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 8); 
  lc.clearDisplay(0);  
  lc.setScanLimit(0, 7); 
}

void loop() {
  // showing each face expression one by one

  displayNeutralFace();
  delay(1000); // pause for 1 second

  displayHappyFace();
  delay(1000); 

  displaySadFace();
  delay(1000); 
}

// neutral face
void displayNeutralFace() {
  byte neutralFace[8] = {
    B01000010, // two dot eyes
    B01000010, // two dot eyes
    B00000000, 
    B00000000, 
    B11111111, // straight mouth
    B00000000, 
    B00000000, 
    B00000000  
  };

  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, neutralFace[i]);
  }
}

// happy face
void displayHappyFace() {
  byte happyFace[8] = {
    B01000010, // two dot eyes
    B01000010, // two dot eyes
    B00000000, 
    B00000000, 
    B00111100, // smile
    B01000010, // smile
    B00000000, 
    B00000000  
  };

  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, happyFace[i]);
  }
}

// sad face
void displaySadFace() {
  byte sadFace[8] = {
    B01000010, // two dot eyes
    B01000010, // two dot eyes
    B00000000, 
    B00000000, 
    B01000010, // frown
    B00111100, // frown
    B00000000, 
    B00000000  
  };

  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, sadFace[i]);
  }
}
