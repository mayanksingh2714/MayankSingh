
#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], Sum[10][10], Mul[10][10];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Addition
    if(r1 == r2 && c1 == c2)
    {
        cout << "\nAddition:\n";
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                Sum[i][j] = A[i][j] + B[i][j];
                cout << Sum[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "\nAddition not possible.\n";

    // Multiplication
    if(c1 == r2)
    {
        cout << "\nMultiplication:\n";

        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                Mul[i][j] = 0;

                for(int k = 0; k < c1; k++)
                    Mul[i][j] += A[i][k] * B[k][j];

                cout << Mul[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "\nMultiplication not possible.\n";

    return 0;
}