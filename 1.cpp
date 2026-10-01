//Write a Program to insert and delete an element in 1-D arrays//
#include <iostream>
using namespace std;

int main() {
    int a[100], n, pos, value, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n1. Insert\n2. Delete\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter position: ";
        cin >> pos;
        cout << "Enter value: ";
        cin >> value;

        for (int i = n; i >= pos; i--)
            a[i] = a[i - 1];

        a[pos - 1] = value;
        n++;

        cout << "Array after insertion: ";
    }
    else if (choice == 2) {
        cout << "Enter position: ";
        cin >> pos;

        for (int i = pos - 1; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;

        cout << "Array after deletion: ";
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
