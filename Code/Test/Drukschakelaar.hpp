class Drukschakelaar {
private:
    bool waarde = 0; //0 = open, 1 = ingedrukt
	uint8_t PIN; // De pin waar het slot op aangesloten zit.
    void leesAf(); // leest de pin af en zet dit in waarde.
    int DEBOUNCETIME = 50; // de debouncetijd in ms
public:
    Drukschakelaar(uint8_t pin);
    ~Drukschakelaar();
	bool status();
};

Drukschakelaar::Drukschakelaar(uint_8t pin) {
    PIN = pin;
    pinMode(PIN, INPUT);

}
Drukschakelaar::~Drukschakelaar() {

}

void Drukschakelaar::leesAf() {
    if (digitalRead(PIN) == 1) {
        
        delay(DEBOUNCETIME);
        if (digitalRead(PIN) == 1 ) {
            waarde = 1;
        }
    } else waarde = 0;

}

bool Drukschakelaar::status() {
    leesAf();
    return waarde;
}