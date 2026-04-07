#include <iostream>
using namespace std;
main()
{
    int row, col;
    // Triangle shape
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    cout << "Triangle Shape: " << endl;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Triangle Shape
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    cout << "Reverse Triangle Shape: " << endl;
    for (row = 5; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Square Shape
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    cout << "Square shape: " << endl;
    for (row = 1; row <= 4; row++)
    {
        for (col = 1; col <= 4; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}