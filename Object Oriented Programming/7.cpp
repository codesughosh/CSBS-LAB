#include <iostream>
using namespace std;

class DATE
{
private:
    int d, m, y;

    bool isLeap(int y) const
    {
        return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
    }

    int monthDays(int m, int y) const
    {
        switch (m)
        {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeap(y) ? 29 : 28;
        }
        return 0;
    }

    long toDays() const
    {
        long days = d;

        for (int i = 1; i < m; i++)
            days += monthDays(i, y);

        days += (y - 1) * 365;
        days += (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;

        return days;
    }

    void fromDays(long total)
    {
        y = 1;
        while (true)
        {
            int dy = isLeap(y) ? 366 : 365;
            if (total > dy)
            {
                total -= dy;
                y++;
            }
            else break;
        }

        m = 1;
        while (true)
        {
            int dm = monthDays(m, y);
            if (total > dm)
            {
                total -= dm;
                m++;
            }
            else break;
        }

        d = total;
    }

public:
    DATE() { d = 1; m = 1; y = 1; }

    DATE(int dd, int mm, int yy)
    {
        d = dd; m = mm; y = yy;
    }

    int operator-(const DATE &o) const
    {
        return toDays() - o.toDays();
    }

    DATE operator+(int days) const
    {
        DATE t;
        t.fromDays(toDays() + days);
        return t;
    }

    friend ostream &operator<<(ostream &out, const DATE &dt)
    {
        out << dt.d << "/" << dt.m << "/" << dt.y;
        return out;
    }
};

int main()
{
    int d1, m1, y1, d2, m2, y2;

    cout << "Enter first date (dd mm yyyy): ";
    cin >> d1 >> m1 >> y1;

    cout << "Enter second date (dd mm yyyy): ";
    cin >> d2 >> m2 >> y2;

    DATE date1(d1, m1, y1), date2(d2, m2, y2);

    cout << "Days difference: " << (date1 - date2) << endl;

    int n;
    cout << "Enter days to add: ";
    cin >> n;

    DATE newDate = date1 + n;
    cout << "New date: " << newDate << endl;

    return 0;
}
