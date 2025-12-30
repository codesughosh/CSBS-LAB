#include <iostream>
using namespace std;

class EMPLOYEE
{
private:
    int Employee_Number;
    string Employee_Name;
    float Basic, DA, IT, Net_Sal;

public:
    void readData()
    {
        cout << "Enter Employee Number: ";
        cin >> Employee_Number;

        cout << "Enter Employee Name: ";
        cin >> Employee_Name;

        cout << "Enter Basic Salary: ";
        cin >> Basic;
    }

    void calculateNetSal()
    {
        DA = 0.52 * Basic;
        float gross = Basic + DA;
        IT = 0.30 * gross;
        Net_Sal = gross - IT;
    }

    void printData()
    {
        cout << "\nEmployee Number: " << Employee_Number;
        cout << "\nEmployee Name: " << Employee_Name;
        cout << "\nBasic Salary: " << Basic;
        cout << "\nDA: " << DA;
        cout << "\nIncome Tax: " << IT;
        cout << "\nNet Salary: " << Net_Sal << endl;
    }
};

int main()
{
    int N;
    cout << "Enter number of employees: ";
    cin >> N;

    EMPLOYEE emp[N];

    for (int i = 0; i < N; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        emp[i].readData();
        emp[i].calculateNetSal();
    }

    cout << "\n--- Employee Salary Details ---\n";
    for (int i = 0; i < N; i++)
    {
        emp[i].printData();
    }

    return 0;
}
