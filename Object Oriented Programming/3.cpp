#include <iostream>
using namespace std;

class COMPLEX
{
private:
    int real, imag;

public:
    void read()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    // ADD(int, COMPLEX)
    COMPLEX ADD(int a, COMPLEX s2)
    {
        COMPLEX temp;
        temp.real = a + s2.real;
        temp.imag = s2.imag;
        return temp;
    }

    // ADD(COMPLEX, COMPLEX)
    COMPLEX ADD(COMPLEX s1, COMPLEX s2)
    {
        COMPLEX temp;
        temp.real = s1.real + s2.real;
        temp.imag = s1.imag + s2.imag;
        return temp;
    }
};

int main()
{
    COMPLEX s1, s2, result;
    int a, choice;

    cout << "1. ADD (int, COMPLEX)\n";
    cout << "2. ADD (COMPLEX, COMPLEX)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter integer value: ";
        cin >> a;

        cout << "Enter complex number:\n";
        s2.read();

        result = result.ADD(a, s2);
        cout << "Result: ";
        result.display();
        break;

    case 2:
        cout << "Enter first complex number:\n";
        s1.read();

        cout << "Enter second complex number:\n";
        s2.read();

        result = result.ADD(s1, s2);
        cout << "Result: ";
        result.display();
        break;

    default:
        cout << "Invalid choice";
    }

    return 0;
}
