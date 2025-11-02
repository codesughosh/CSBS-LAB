#include <iostream>
using namespace std;

class COMPLEX {
    float real, imag;
public:
    void read() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
    COMPLEX ADD(int a, COMPLEX s2) {
        COMPLEX temp;
        temp.real = a + s2.real;
        temp.imag = s2.imag;
        return temp;
    }
    COMPLEX ADD(COMPLEX s1, COMPLEX s2) {
        COMPLEX temp;
        temp.real = s1.real + s2.real;
        temp.imag = s1.imag + s2.imag;
        return temp;
    }
};

int main() {
    COMPLEX c1, c2, c3, c4;
    cout << "Enter first complex number:\n";
    c1.read();
    cout << "Enter second complex number:\n";
    c2.read();
    c3 = c3.ADD(c1, c2);
    c4 = c4.ADD(5, c2);
    cout << "\nSum of two complex numbers: ";
    c3.display();
    cout << "Sum of integer and complex number: ";
    c4.display();
    return 0;
}
