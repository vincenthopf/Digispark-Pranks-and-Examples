#include "DigiKeyboard.h"
int i = 1;
void setup() {
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0);
  }

void loop() {  
  delay(500);
  while(i==1){
    DigiKeyboard.delay(600);
    DigiKeyboard.print("https://jidiparts.wordpress.com/");
    DigiKeyboard.sendKeyStroke(KEY_ENTER); 
    i = 2;   
  }  
}
