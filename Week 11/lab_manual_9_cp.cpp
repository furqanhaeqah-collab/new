#include <iostream>
using namespace std;

// Function prototype
int isIdenticalArray(int matrix[][3], int row);

// Main Function
main()
{
    cout << "Enter the number of rows for the array: ";
    int rowSize;
    cin >> rowSize;
    int matrix[rowSize][3];
    cout << "Enter the elements of the array:" << endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
    int result = isIdenticalArray(matrix, rowSize);
    cout << "The count of identical rows in array is: " << result;
}

// isIdenticalArray Function
int isIdenticalArray(int matrix[][3], int rowSize)
{
    int count = 0;
    bool istrue = false;
    int array[3] = {matrix[0][0], matrix[0][1], matrix[0][2]};
    for (int row = 0; row < 3; row++)
    {
        if (array[0] == matrix[row][0] && array[1] == matrix[row][1] && array[2] == matrix[row][2])
        {
            count++;
        }
    }
    if(count == 1){
        return 0;
    }
    else{
        return count; 
    }
    
}