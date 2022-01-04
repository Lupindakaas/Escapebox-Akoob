class Sleutelslot
{
private:
	uint8_t waarde; //0 = vrij, 1 = op slot
	uint8_t PIN;	// De pin waar het slot op aangesloten zit.
  void leesAf();
public:
	Sleutelslot(uint8_t pin);
	~Sleutelslot();
	bool status();
 
};

//---------------Source code----------------//

Sleutelslot::Sleutelslot(uint8_t pin)
{
	PIN = pin;
	pinMode(PIN, INPUT);
	
}

Sleutelslot::~Sleutelslot()
{
	
}

void Sleutelslot::leesAf()
{

	waarde = digitalRead(PIN);
}

bool Sleutelslot::status()
{
	leesAf();
	return waarde;
}
