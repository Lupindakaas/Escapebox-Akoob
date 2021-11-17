#include "Ladeslot.hpp"
Ladeslot ladeslot(2);

void setup() {
  // put your setup code here, to run once:
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  ladeslot.doeOpSlot();
  delay(1000);
  ladeslot.vanSlotAf();
  delay(1000);
}
