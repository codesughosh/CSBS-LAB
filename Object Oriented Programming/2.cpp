#include <iostream>
using namespace std;

class STUDENT {
    string usn, name;
    float m1, m2, m3, avg;
public:
    void read() {
        cout << "Enter USN, Name and 3 marks: ";
        cin >> usn >> name >> m1 >> m2 >> m3;
    }
    void calculate() {
        float minm = min(m1, min(m2, m3));
        avg = (m1 + m2 + m3 - minm) / 2.0;
    }
    void display() {
        cout << "USN: " << usn << "  Name: " << name << "  Average: " << avg << endl;
    }
};

int main() {
    STUDENT s[10];
    for (int i = 0; i < 10; i++) {
        s[i].read();
        s[i].calculate();
    }
    cout << "\nStudent Details:\n";
    for (int i = 0; i < 10; i++) s[i].display();
    return 0;
}
