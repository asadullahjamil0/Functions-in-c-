#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // creating a constructor
    Complex(void);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void)
{
    a = 10;
    b = 4;
}
int main()
{
    Complex c;
    c.printNumber();

    return 0;
}