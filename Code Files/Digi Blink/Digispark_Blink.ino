// Digispark Blink code - used for testing that digispark to computer communication is working.
// Written by V.hopf
// For more info email me at this email address: jidiparts@gmail.com
// Website: https://jidiparts.wordpress.com/
void setup() {
  pinMode(0, OUTPUT); // LED is attched to pin 0
}

void loop() {
  digitalWrite(0, HIGH);  // turn the LED on
  delay(1000);           // wait for a second
  digitalWrite(0, LOW); // turn the LED off
  delay(1000);         // wait for a second
}
