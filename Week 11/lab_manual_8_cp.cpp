#include <iostream>
using namespace std;

// Function prototype
int largestColumnFirst(int matrix[][5], int row);

// Main Function
main()
{
    cout << "Enter the number of rows: ";
    int rowSize;
    cin >> rowSize;
    int matrix[rowSize][5];
    cout << "Enter the elements of the matrix: " << endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "Enter elements at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
    cout << "Original Matrix: " << endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << matrix[row][col] << "  ";
        }
        cout << endl;
    }
    int largestCol = largestColumnFirst(matrix, rowSize);
    for (int row = 0; row < rowSize; row++)
    {
        int swap = matrix[row][largestCol];
        matrix[row][largestCol] = matrix[row][0];
        matrix[row][0] = swap;
    }
    cout << "Matrix after largest column moved to first:" << endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << matrix[row][col] << "  ";
        }
        cout << endl;
    }
}

// largestColumnFirst Function
int largestColumnFirst(int matrix[][5], int rowSize)
{
    int largestcol, largest = 0;
    for (int col = 0; col < 5; col++)
    {
        if (matrix[0][col] > largest)
        {
            largest = matrix[0][col];
            largestcol = col;
        }
    }
    return largestcol;
}
