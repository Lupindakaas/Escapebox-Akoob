#include "Ledstrip.hpp"

Ledstrip leds(4, 2, 3);

void setup() {
	
	
}

void loop() {
	
	leds.wordGroen();
	delay(1000);
	leds.wordRood();
	delay(1000);
	leds.wordBlauw();
	delay(1000);
}