#include <iostream>
using namespace std;

class DLIST
{
private:
    struct node
    {
        int data;
        node *prev;
        node *next;
    };

    node *head;

public:
    DLIST()
    {
        head = NULL;
    }

    // Insert at given position
    void insertAtPos()
    {
        int pos, val;
        cout << "Enter position: ";
        cin >> pos;
        cout << "Enter value: ";
        cin >> val;

        node *newNode = new node;
        newNode->data = val;
        newNode->prev = newNode->next = NULL;

        if (pos <= 1 || head == NULL)
        {
            newNode->next = head;
            if (head != NULL)
                head->prev = newNode;
            head = newNode;
            return;
        }

        node *temp = head;
        for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
            temp = temp->next;

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;

        temp->next = newNode;
    }

    // Delete from given position
    void deleteAtPos()
    {
        if (head == NULL)
        {
            cout << "List empty\n";
            return;
        }

        int pos;
        cout << "Enter position: ";
        cin >> pos;

        node *temp = head;

        if (pos <= 1)
        {
            head = head->next;
            if (head != NULL)
                head->prev = NULL;
            delete temp;
            return;
        }

        for (int i = 1; i < pos && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL)
        {
            cout << "Invalid position\n";
            return;
        }

        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        if (temp->prev != NULL)
            temp->prev->next = temp->next;

        delete temp;
    }

    // Display list
    void display()
    {
        if (head == NULL)
        {
            cout << "List empty\n";
            return;
        }

        node *temp = head;
        cout << "List: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DLIST d;
    int choice;

    do
    {
        cout << "\n1. Insert at position\n";
        cout << "2. Delete from position\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            d.insertAtPos();
            d.display();
            break;

        case 2:
            d.deleteAtPos();
            d.display();
            break;

        case 3:
            cout << "Exiting\n";
            break;

        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 3);

    return 0;
}
