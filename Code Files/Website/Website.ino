// This Code is written by Vincent J Hopf - www.vjs3d.cc
// You will need an internet connection and a web browser for this code to work.
#include "DigiKeyboard.h"//Include the library "DigiKeyboard.h"
int i = 1;
void setup() { //runs once on startup.
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0);// This isn't necessary but it stops any unintended keys being pressed.
}

void loop() {  
  delay(500);//Pause for 500 milliseconds
  while(i==1){
    DigiKeyboard.delay(600);//Pause for 600 milliseconds
    DigiKeyboard.print("https://jidiparts.wordpress.com/");//Types out the web address
    DigiKeyboard.sendKeyStroke(KEY_ENTER);//presses the ENTER key.
    i = 2;//stops the program from running multiple times.
  }  
}
