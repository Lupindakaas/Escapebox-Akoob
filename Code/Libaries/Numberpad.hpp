class Numberpad
{
private:
    uint8_t rows = 0;
    uint8_t columns = 0;
    int[rows-1] rowPins;
    int[columns-1] columnPins;
public:
    Numberpad(int[10] rows, int[10] columns);
    Init();
    Read();
    ~Numberpad();
};

Numberpad::Numberpad(int[5] rows, int[5] columns)
{
}

Numberpad::~Numberpad()
{
}
