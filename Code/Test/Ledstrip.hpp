class Ledstrip	
{
private:
	uint8_t PINGROEN;	// De pin waar het slot op aangesloten zit.
	uint8_t PINBLAUW;
	uint8_t PINROOD;
  void leesAf();
public:
	Ledstrip(uint8_t, uint8_t, uint8_t);
	~Ledstrip();
	void wordGroen();
	void wordBlauw();
	void wordRood();
};

Ledstrip::Ledstrip(uint8_t groen, uint8_t blauw, uint8_t rood) {
	PINGROEN = groen;
	PINBLAUW = blauw;
	PINROOD = rood;
}

Ledstrip::~Ledstrip() {
	digitalWrite(PINGROEN, LOW);
	digitalWrite(PINROOD, LOW);
	digitalWrite(PINGROEN, LOW);
}

void Ledstrip::wordGroen(){
	digitalWrite(PINGROEN, HIGH);
	digitalWrite(PINROOD, LOW);
	digitalWrite(PINGROEN, LOW);
}

void Ledstrip::wordRood(){
	digitalWrite(PINGROEN, LOW);
	digitalWrite(PINROOD, HIGH);
	digitalWrite(PINGROEN, LOW);
}

void Ledstrip::wordBlauw(){
	digitalWrite(PINGROEN, LOW);
	digitalWrite(PINROOD, LOW);
	digitalWrite(PINGROEN, HIGH);
}
