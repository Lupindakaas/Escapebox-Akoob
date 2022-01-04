#include <Keypad.h>

//Deze klasse dient alleen als abstractielaag op de al bestande keypad.h klasse
//voornamelijke functionaliteit is het verminderen van keymap configuratie. zijn allemaal dezelfde keypads namelijk
//ook netter om het zo een bestaande klasse op te nemen in een project.

class 4x4KnoppenMatrix
{
private:
	Keypad Keypad;
public:
	4x4KnoppenMatrix(uint8_t rows[4], uint8_t columns[4]);
	~4x4KnoppenMatrix();
	char leesAf();
};

4x4KnoppenMatrix::4x4KnoppenMatrix(uint8_t rowPins[4], uint8_t colPins[4]){
	 
	char hexaKeys[ROWS][COLS] = {
  		{'1','2','3','A'},
  		{'4','5','6','B'},
  		{'7','8','9','C'},
  		{'*','0','#','D'}
	};

	Keypad = Keypad(makeKeymap(hexaKeys), rowPins[4], colPins[4], 4, 4);
}

char 4x4KnoppenMatrix::leesAf(){
	return Keypad.getKey();
}