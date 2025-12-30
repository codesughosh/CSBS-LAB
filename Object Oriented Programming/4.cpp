#include <iostream>
using namespace std;

class LIST
{
private:
    struct node
    {
        int data;
        node *next;
    };

    node *head;

public:
    LIST()
    {
        head = NULL;
    }

    // Insert at front
    void insertFront()
    {
        int value;
        cout << "Enter value to insert: ";
        cin >> value;

        node *newNode = new node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;

        cout << "Element inserted at front.\n";
    }

    // Delete from front
    void deleteFront()
    {
        if (head == NULL)
        {
            cout << "List is empty. Deletion not possible.\n";
            return;
        }

        node *temp = head;
        head = head->next;
        cout << "Deleted element: " << temp->data << endl;
        delete temp;
    }

    // Display list
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        node *temp = head;
        cout << "List elements: ";
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
    LIST list;
    int choice;

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert at front\n";
        cout << "2. Delete from front\n";
        cout << "3. Display list\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            list.insertFront();
            break;

        case 2:
            list.deleteFront();
            break;

        case 3:
            list.display();
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
