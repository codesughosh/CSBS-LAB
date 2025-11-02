#include <iostream>
using namespace std;

class EMPLOYEE {
    int Employee_Number;
    string Employee_Name;
    float Basic, DA, IT, Net_Sal;

public:
    void read() {
        cout << "Enter Employee Number: ";
        cin >> Employee_Number;
        cout << "Enter Employee Name: ";
        cin >> Employee_Name;
        cout << "Enter Basic Salary: ";
        cin >> Basic;
    }

    void calculate() {
        DA = 0.52 * Basic;
        float gross = Basic + DA;
        IT = 0.3 * gross;
        Net_Sal = gross - IT;
    }

    void display() {
        cout << "\nEmployee Number: " << Employee_Number;
        cout << "\nEmployee Name: " << Employee_Name;
        cout << "\nBasic: " << Basic;
        cout << "\nDA: " << DA;
        cout << "\nIT: " << IT;
        cout << "\nNet Salary: " << Net_Sal << "\n";
    }
};

int main() {
    int N;
    cout << "Enter number of employees: ";
    cin >> N;
    EMPLOYEE e[N];
    for (int i = 0; i < N; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        e[i].read();
        e[i].calculate();
    }
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < N; i++) e[i].display();
    return 0;
}
