#include <iostream>
using namespace std;

class STACK
{
private:
    int arr[10];
    int top;
    int size;

public:
    STACK()
    {
        top = -1;
        size = 10;
    }

    // Overload + operator (Push)
    STACK operator+(int element)
    {
        if (top == size - 1)
        {
            cout << "STACK FULL. Cannot push.\n";
            return *this;
        }

        arr[++top] = element;
        cout << "Pushed element: " << element << endl;
        return *this;
    }

    // Overload - operator (Pop)
    STACK operator-()
    {
        if (top == -1)
        {
            cout << "STACK EMPTY. Cannot pop.\n";
            return *this;
        }

        cout << "Popped element: " << arr[top--] << endl;
        return *this;
    }

    // Overload << operator (Display)
    friend ostream &operator<<(ostream &out, STACK &s)
    {
        if (s.top == -1)
        {
            out << "Stack is empty.\n";
            return out;
        }

        out << "Stack contents: ";
        for (int i = s.top; i >= 0; i--)
            out << s.arr[i] << " ";
        out << endl;

        return out;
    }
};

int main()
{
    STACK s1;
    int choice, element;

    do
    {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push element\n";
        cout << "2. Pop element\n";
        cout << "3. Display stack\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element to push: ";
            cin >> element;
            s1 = s1 + element;
            cout << s1;
            break;

        case 2:
            s1 = s1 - ;
            cout << s1;
            break;

        case 3:
            cout << s1;
            break;

        case 4:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
