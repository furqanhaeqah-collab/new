#include <iostream>
using namespace std;

// Function prototype
bool isGoalScored(string field[7][16]);

// Main Function
main()
{
    string field[7][16] = {
        {" ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#", " "},
        {" ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#", " "},
        {" ", "#", " ", "0", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#", " "},
        {" ", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", " "},
        {" ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " "},
        {" ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " "}};
    bool result = isGoalScored(field);
    if (result == false)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }
}

// isGoalScored Function
bool isGoalScored(string field[7][16])
{
    bool goal = false;
    for (int col = 0; col < 16; col++)
    {
        if (field[0][col] == "0" || field[1][col] == "0" || field[2][col] == "0")
        {
            goal = true;
        }
    }
    return goal;
}