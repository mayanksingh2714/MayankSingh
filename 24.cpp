//program to implement Linear Search in a 2D Matrix:
#include <iostream>
using namespace std;

int main() {
    int rows, cols, key;
    
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;

    // Linear Search
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == key) {
                cout << "Element found at position: ("
                     << i << ", " << j << ")" << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }

    return 0;
}