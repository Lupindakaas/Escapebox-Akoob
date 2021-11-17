class Ledstrip	
{
private:
	uint8_t PINGROEN;	// De pin waar het slot op aangesloten zit.
	uint8_t PINBLAUW;
	uint8_t PINROOD;
  void leesAf();
public:
	Ledstrip(uint8_t pin);
	~Ledstrip();
	void wordGroen();
	void wordBlauw();
	void wordBlauw();
};

Ledstrip::Ledstrip(uint8_t groen, uint8_t blauw, uint8_t rood) {
	PINGROEN = groen;
	PINGBLAUW = blauw;
	PINROOD = rood;
}

Ledstrip::~Ledstrip {
	digitalwrite(PINGROEN, LOW);
	digitalwrite(PINROOD, LOW);
	digitalwrite(PINGROEN, LOW);
}

void Ledstrip::wordGroen(){
	digitalwrite(PINGROEN, HIGH);
	digitalwrite(PINROOD, LOW);
	digitalwrite(PINGROEN, LOW);
}

void Ledstrip::wordRood(){
	digitalwrite(PINGROEN, LOW);
	digitalwrite(PINROOD, HIGH);
	digitalwrite(PINGROEN, LOW);
}

void Ledstrip::wordBlauw(){
	digitalwrite(PINGROEN, LOW);
	digitalwrite(PINROOD, LOW);
	digitalwrite(PINGROEN, HIGH);
}
