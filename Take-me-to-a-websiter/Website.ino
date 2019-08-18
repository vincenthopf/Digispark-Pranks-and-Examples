#include "DigiKeyboard.h"//Include the library "DigiKeyboard.h"
int i = 1;
void setup() {
  DigiKeyboard.delay(200);//Pause for 200 milliseconds
  DigiKeyboard.sendKeyStroke(0);
  }

void loop() {  
  delay(500);//Pause for 500 milliseconds
  while(i==1){
    DigiKeyboard.delay(600);//Pause for 600 milliseconds
    DigiKeyboard.print("https://jidiparts.wordpress.com/");//Types out the web address
    DigiKeyboard.sendKeyStroke(KEY_ENTER);//press the ENTER key
    i = 2;//stops the program from running multiple times 
  }  
}
