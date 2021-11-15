class Sleutelslot {
private:
    uint8_t value; //0 = vrij, 1 = op slot
	uint8_t PIN; // De pin waar het slot op aangesloten zit.
public:
    Sleutelslot(uint8_t pin);
    ~Sleutelslot();
	void doeOpSlot();
	void vanSlotAf();
	void OpSlot();
};

Sleutelslot::Sleutelslot(uint8_t pin) {
	PIN = pin;
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