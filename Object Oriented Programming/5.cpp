#include <iostream>
using namespace std;

// Template function to swap two values
template <class T>
void swapVal(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// Template function for partition
template <class T>
int partition(T arr[], int low, int high)
{
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swapVal(arr[i], arr[j]);
        }
    }
    swapVal(arr[i + 1], arr[high]);
    return i + 1;
}

// Template function for Quick Sort
template <class T>
void quickSort(T arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

// Template function to display array
template <class T>
void display(T arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int choice, n;

    cout << "1. Sort integers\n";
    cout << "2. Sort doubles\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "Enter number of integers: ";
        cin >> n;

        int arr[n];
        cout << "Enter elements:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        quickSort(arr, 0, n - 1);

        cout << "Sorted integers: ";
        display(arr, n);
        break;
    }

    case 2:
    {
        cout << "Enter number of doubles: ";
        cin >> n;

        double arr[n];
        cout << "Enter elements:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        quickSort(arr, 0, n - 1);

        cout << "Sorted doubles: ";
        display(arr, n);
        break;
    }

    default:
        cout << "Invalid choice";
    }

    return 0;
}
