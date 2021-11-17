class SevenSegmentDisplay
{
private:
	int waarde; //0 = vrij, 1 = op slot
	uint8_t PINS[8];	// De pin waar het slot op aangesloten zit.
public:
	SevenSegmentDisplay(uint8_t pin);
	~SevenSegmentDisplay();
	void update();
	void veranderWaarde(int nieuw);
	int geefWaarde();
};

SevenSegmentDisplay::SevenSegmentDisplay(uint8_t pins[8]){
	PINS = pins;
	
}

int SevenSegmentDisplay::geefWaarde(){
	return waarde;
}

void SevenSegmentDisplay::veranderWaarde(int nieuw){
	waarde = nieuw;
	update();
}
