// Witten by V.hopf 
// BE WARNED!!! This program will open a fake windows update that will never end, e.g go on forever...
// Happy Pranking... :-)
#include "DigiKeyboard.h"

#define KEY_TAB               0x2b     // Keyboard TAB
int maxCase = 3;                       // Maximum number of current used cases +1
int randNumber;
const int TIMEDELAY = 2000;           // The delay before allowing the program to loop again

void setup() {
  DigiKeyboard.delay(300000); //Wait Five Minutes to prevent the device from interfering with user login
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
}
  
void loop() {  
// This loop is left blank intentionally...
}
