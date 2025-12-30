#include <iostream>
using namespace std;

template <class T>
class QUEUE
{
private:
    T q[10];
    int front, rear;

public:
    QUEUE()
    {
        front = -1;
        rear = -1;
    }

    void add()
    {
        if (rear == 9)
        {
            cout << "Queue full\n";
            return;
        }

        T item;
        cout << "Enter element to add: ";
        cin >> item;

        if (front == -1)
            front = 0;

        q[++rear] = item;
    }

    void del()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue empty\n";
            return;
        }

        cout << "Deleted element: " << q[front] << endl;
        front++;
    }

    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue empty\n";
            return;
        }

        cout << "Queue contents: ";
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
        cout << endl;
    }
};

int main()
{
    int choice, op;

    cout << "1. Integer Queue\n";
    cout << "2. Double Queue\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        QUEUE<int> qi;
        do
        {
            cout << "\n1.Add  2.Delete  3.Exit\n";
            cin >> op;
            switch (op)
            {
            case 1:
                qi.add();
                qi.display();
                break;
            case 2:
                qi.del();
                qi.display();
                break;
            }
        } while (op != 3);
        break;
    }

    case 2:
    {
        QUEUE<double> qd;
        do
        {
            cout << "\n1.Add  2.Delete  3.Exit\n";
            cin >> op;
            switch (op)
            {
            case 1:
                qd.add();
                qd.display();
                break;
            case 2:
                qd.del();
                qd.display();
                break;
            }
        } while (op != 3);
        break;
    }

    default:
        cout << "Invalid choice\n";
    }

    return 0;
}
