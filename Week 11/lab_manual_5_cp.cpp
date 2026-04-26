#include <iostream>
using namespace std;

// Function prototype
bool isIdentity(int matrix[3][3], int row);

// Main Function
main()
{
    int rowSize = 3, colSize = 3;
    cout << "Enter the elements of the matrix: " << endl;
    int matrix[rowSize][3];
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cout << "Enter the element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
    bool result = isIdentity(matrix, rowSize);
    if (result == false)
    {
        cout << "The entered matrix is NOT an identity matrix" << endl;
    }
    else
    {
        cout << "The entered matrix is an identity matrix" << endl;
    }
}

// isIdentity Function
bool isIdentity(int matrix[3][3], int rowSize)
{
    bool identity = false;
    for (int index = 0; index < rowSize; index++)
    {
        if (matrix[index][index] == 1 && matrix[0][1] != 1 && matrix[0][2] != 1 &&
            matrix[1][0] != 1 && matrix[1][2] != 1 && matrix[2][0] != 1 &&
            matrix[2][1] != 1)
        {
            identity = true;
        }
    }
    return identity;
}