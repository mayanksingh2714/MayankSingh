//Write a Program to implement max and min in arrays   in c++//
#include <iostream>
using namespace std;

int main() {
    int a[100], n, max, min;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    max = min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}