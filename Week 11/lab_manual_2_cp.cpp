#include <iostream>
using namespace std;

// Function prototype
void carData(int car[][5], int row_size);

// Main Function
main()
{
    // const is used to fixed the value
    // Now the value can't be changed by anyone except yourself
    const int row_size = 5;
    const int col_size = 5;
    int car[][col_size] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}};
    carData(car, row_size);
}

// carData Function
void carData(int car[][5], int row_size)
{
    // Loops to display 2D arrays
    for (int row = 0; row < row_size; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << car[row][col] << "\t";
        }
        cout << endl;
    }
}