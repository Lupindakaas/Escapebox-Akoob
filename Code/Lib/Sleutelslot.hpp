class Sleutelslot {
private:
    uint8_t value; //0 = vrij, 1 = op slot
	uint8_t PIN; // De pin waar het slot op aangesloten zit.
public:
    Sleutelslot(uint8_t pin);
    ~Sleutelslot();
	void doeOpSlot();
	void vanSlotAf();
	uint8_t OpSlot();
};

//---------------Source code----------------//

Sleutelslot::Sleutelslot(uint8_t pin) {
	PIN = pin;
	pinMode(PIN, OUTPUT);
	vanSlotAf();
}

Sleutelslot::~Sleutelslot() {
	vanSlotAf();
}

void Sleutelslot::doeOpSlot(){
	value = 1;
	digitalWrite(PIN,  HIGH);

}

void Sleutelslot::vanSlotAf(){
	value = 0;
	digitalWrite(PIN,  LOW);
}

uint8_t Sleutelslot::OpSlot(){
	return value;
}