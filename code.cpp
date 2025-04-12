#include "Keyboard.h"
#define button1 10
#define button2 8
#define button3 7
#define button4 9
boolean b1_pressed, b2_pressed, b3_pressed, b4_pressed = false;

void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button1) == 0 && b1_pressed == false) {
    Keyboard.print("Stay ");
    b1_pressed = true;
  } else if (digitalRead(button1) == 1 && b1_pressed == true) {
    b1_pressed = false;
  }
  if (digitalRead(button2) == 0 && b2_pressed == false) {
    Keyboard.print("tuned ");
    b2_pressed = true;
  }else if (digitalRead(button2) == 1 && b1_pressed == true) {
    b2_pressed = false;
  }
  if (digitalRead(button3) == 0 && b3_pressed == false) {
    Keyboard.print("for ");
    b3_pressed = true;
  }else if (digitalRead(button3) == 1 && b3_pressed == true) {
    b3_pressed = false;
  }
  if (digitalRead(button4) == 0 && b4_pressed == false) {
    Keyboard.print("more videos!");
    b4_pressed = true;
  }else if (digitalRead(button4) == 1 && b4_pressed == true) {
    b4_pressed = false;
  }
}
