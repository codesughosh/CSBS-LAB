#include <iostream>
using namespace std;

class MATRIX
{
private:
    int a[10][10];
    int rows, cols;

public:
    void read()
    {
        cout << "Enter number of rows and columns: ";
        cin >> rows >> cols;

        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> a[i][j];
    }

    // Overload == to check compatibility
    bool operator==(MATRIX m)
    {
        if (rows == m.rows && cols == m.cols)
            return true;
        else
            return false;
    }

    // Overload + for addition
    MATRIX operator+(MATRIX m)
    {
        MATRIX temp;
        temp.rows = rows;
        temp.cols = cols;

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];

        return temp;
    }

    // Overload - for subtraction
    MATRIX operator-(MATRIX m)
    {
        MATRIX temp;
        temp.rows = rows;
        temp.cols = cols;

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                temp.a[i][j] = a[i][j] - m.a[i][j];

        return temp;
    }

    // Overload << for display
    friend ostream &operator<<(ostream &out, MATRIX m)
    {
        for (int i = 0; i < m.rows; i++)
        {
            for (int j = 0; j < m.cols; j++)
                out << m.a[i][j] << " ";
            out << endl;
        }
        return out;
    }
};

int main()
{
    MATRIX m1, m2, m3, m4;

    cout << "Enter first matrix:\n";
    m1.read();

    cout << "Enter second matrix:\n";
    m2.read();

    if (m1 == m2)
    {
        m3 = m1 + m2;
        m4 = m1 - m2;

        cout << "\nMatrix Addition Result:\n";
        cout << m3;

        cout << "\nMatrix Subtraction Result:\n";
        cout << m4;
    }
    else
    {
        cout << "Matrices are not compatible for addition and subtraction.\n";
    }

    return 0;
}
