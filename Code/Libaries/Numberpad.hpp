class Numberpad
{
private:
    uint8_t ROWS = 3;
    uint8_t COLUMNS = 4;
    uint8_t rowPins[10];
    uint8_t columnPins[10];
public:
    Numberpad(int rows[10], int columns[10]);
    void Init();
    void Read();
    ~Numberpad();
};


//--------------------------------------------------------------------------------//
//                                      Source                                    //
//--------------------------------------------------------------------------------//


Numberpad::Numberpad(int amountOfRows, int amountOfColumns)
{
    for (uint8_t i = 0; i < ROWS & ROWS[i] != -1; i++)
    {
        rowPins[i] = rows[i];
    }
    
}

Numberpad::~Numberpad()
{
}
