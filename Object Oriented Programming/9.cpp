#include <iostream>
using namespace std;

class OCTAL
{
private:
    int value;   // stored in decimal

public:
    // Constructor: OCTAL h = x;
    OCTAL(int x = 0)
    {
        value = x;
    }

    // Overload + : int y = h + k;
    int operator+(int k)
    {
        return value + k;
    }

    // Display OCTAL value
    friend ostream &operator<<(ostream &out, OCTAL h)
    {
        int n = h.value;
        int octal = 0, place = 1;

        while (n > 0)
        {
            octal += (n % 8) * place;
            n /= 8;
            place *= 10;
        }

        out << octal;
        return out;
    }
};

int main()
{
    int x, k;

    cout << "Enter integer x: ";
    cin >> x;

    OCTAL h = x;

    cout << "Enter integer k: ";
    cin >> k;

    int y = h + k;

    cout << "Value of h (in octal): " << h << endl;
    cout << "Value of y (in decimal): " << y << endl;

    return 0;
}
