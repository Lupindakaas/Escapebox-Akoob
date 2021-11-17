class Ladeslot {
private:
    uint8_t value; //0 = vrij, 1 = op slot
	uint8_t PIN; // De pin waar het slot op aangesloten zit.
public:
    Ladeslot(uint8_t pin);
    ~Ladeslot();

	void doeOpSlot();
	void vanSlotAf();
	uint8_t OpSlot();
};

//---------------Source code----------------//

Ladeslot::Ladeslot(uint8_t pin) {
	PIN = pin;
	pinMode(PIN, OUTPUT);
	vanSlotAf();
}

Ladeslot::~Ladeslot() {
	vanSlotAf();
}

void Ladeslot::doeOpSlot(){
	value = 1;
	digitalWrite(PIN,  HIGH);

}

void Ladeslot::vanSlotAf(){
	value = 0;
	digitalWrite(PIN,  LOW);
}

uint8_t Ladeslot::OpSlot(){
	return value;
}