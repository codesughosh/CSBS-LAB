#include <iostream>
using namespace std;

class DATE
{
private:
    int dd, mm, yy;

public:
    void read()
    {
        char ch;
        cout << "Enter date (dd/mm/yy): ";
        cin >> dd >> ch >> mm >> ch >> yy;
    }

    // Convert date to total days
    int toDays() const
    {
        return yy * 360 + mm * 30 + dd;
    }

    // Operator - (difference between two dates)
    int operator-(DATE d)
    {
        return this->toDays() - d.toDays();
    }

    // Operator + (add days to date)
    DATE operator+(int days)
    {
        DATE temp;
        int total = this->toDays() + days;

        temp.yy = total / 360;
        total = total % 360;

        temp.mm = total / 30;
        temp.dd = total % 30;

        if (temp.dd == 0)
        {
            temp.dd = 30;
            temp.mm--;
        }
        if (temp.mm == 0)
        {
            temp.mm = 12;
            temp.yy--;
        }

        return temp;
    }

    // Operator << for display
    friend ostream &operator<<(ostream &out, DATE d)
    {
        out << d.dd << "/" << d.mm << "/" << d.yy;
        return out;
    }
};

int main()
{
    DATE d1, d2;
    int choice, no_of_days;

    cout << "Enter first date:\n";
    d1.read();

    cout << "Enter second date:\n";
    d2.read();

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Find number of days (d1 - d2)\n";
        cout << "2. Add days to date (d1 + days)\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            no_of_days = d1 - d2;
            cout << "Number of days between dates: " << no_of_days << endl;
            break;

        case 2:
            cout << "Enter number of days: ";
            cin >> no_of_days;
            d2 = d1 + no_of_days;
            cout << "New date: " << d2 << endl;
            break;

        case 3:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 3);

    return 0;
}
