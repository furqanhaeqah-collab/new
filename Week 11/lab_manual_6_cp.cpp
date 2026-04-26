#include <iostream>
using namespace std;

// Funtion prototype
void fire(string matrix[5][5], string coordinate);

// Main Function
main()
{
    string matrix[5][5] = {
        {".", ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", ".", "*", "*", "."}};
    cout << "Enter coordinates to fire terpedo: ";
    string coordinate;
    cin >> coordinate;
    fire(matrix, coordinate);
}

// fire Function
void fire(string matrix[5][5], string coordinate)
{
    int row, col;
    if (coordinate[0] == 'A')
    {
        row = 0;
        if (coordinate[1] == '1')
        {
            col = 0;
        }
        else if (coordinate[1] == '2')
        {
            col = 1;
        }
        else if (coordinate[1] == '3')
        {
            col = 2;
        }
        else if (coordinate[1] == '4')
        {
            col = 3;
        }
        else if (coordinate[1] == '5')
        {
            col = 4;
        }
    }
    else if (coordinate[0] == 'B')
    {
        row = 1;
    }
    else if (coordinate[0] == 'C')
    {
        row = 2;
    }
    else if (coordinate[0] == 'D')
    {
        row = 3;
    }
    else if (coordinate[0] == 'E')
    {
        row = 4;
    }
    if (coordinate[1] == '1')
    {
        col = 0;
    }
    else if (coordinate[1] == '2')
    {
        col = 1;
    }
    else if (coordinate[1] == '3')
    {
        col = 2;
    }
    else if (coordinate[1] == '4')
    {
        col = 3;
    }
    else if (coordinate[1] == '5')
    {
        col = 4;
    }
    if (matrix[row][col] == ".")
    {
        cout << "Result: Splash";
    }
    else
    {
        cout << "Result: Boom";
    }
}