#include <iostream>
using namespace std;

class STUDENT
{
private:
    string USN, Name;
    float m1, m2, m3, avg;

public:
    void readData()
    {
        cout << "Enter USN: ";
        cin >> USN;

        cout << "Enter Name: ";
        cin >> Name;

        cout << "Enter marks in 3 tests: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculateAverage()
    {
        float best1, best2;

        if (m1 <= m2 && m1 <= m3)
        {
            best1 = m2;
            best2 = m3;
        }
        else if (m2 <= m1 && m2 <= m3)
        {
            best1 = m1;
            best2 = m3;
        }
        else
        {
            best1 = m1;
            best2 = m2;
        }

        avg = (best1 + best2) / 2;
    }

    void printData()
    {
        cout << "\nUSN: " << USN;
        cout << "\nName: " << Name;
        cout << "\nAverage of best two marks: " << avg << endl;
    }
};

int main()
{
    STUDENT s[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;
        s[i].readData();
        s[i].calculateAverage();
    }

    cout << "\n--- Student Average Marks ---\n";
    for (int i = 0; i < 10; i++)
    {
        s[i].printData();
    }

    return 0;
}
