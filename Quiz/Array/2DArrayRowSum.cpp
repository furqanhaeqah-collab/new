#include <iostream>
using namespace std;

// Function prototype
void inputArray(int array[][100], int row, int col);
void rowSumArray(int array[][100], int row, int col);

// Main Function
main()
{
    cout << "Enter the row of array: ";
    int row;
    cin >> row;
    cout << "Enter the column of array: ";
    int col;
    cin >> col;
    int array[row][100];
    inputArray(array, row, col);
    rowSumArray(array, row, col);
}

// Function code
void inputArray(int array[][100], int rowSize, int colSize)
{
    cout << "Enter the elements of 2D array: " << endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cin >> array[row][col];
        }
        cout << endl;
    }
}
void rowSumArray(int array[][100], int rowSize, int colSize)
{
    int sum[rowSize] = {0};
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            sum[row] = sum[row] + array[row][col];
        }
    }
    for (int row = 0; row < rowSize; row++)
    {
        cout << "The sum of the " << row + 1 << " is: " << sum[row] << endl;
    }
}