#include <iostream>
using namespace std;

// Function prototype;
void displayWorld();
void setGravityStatus(bool satus);
void tickTimes(int times);

// Global variable
string objects[5][5] = {
    {"-", "#", "-", "-", "#"},
    {"#", "-", "-", "#", "-"},
    {"-", "-", "#", "-", "-"},
    {"#", "-", "-", "#", "-"},
    {"#", "-", "-", "-", "-"}};
bool gravity = false;

// Main Function
main()
{
    cout << "Enter the number of tick: ";
    int times;
    cin >> times;
    displayWorld();
    setGravityStatus(true);
    tickTimes(times);
}

// displayWorld function
void displayWorld()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << objects[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// setGravityStatus function
void setGravityStatus(bool status)
{
    gravity = status;
}

// tickTimes function
void tickTimes(int times)
{
    if (gravity == false){
       return; 
    }
    else
    {
        int count;
        for (count = 0; count < times; count++)
        {
            for (int row = 0; row < 5; row++)
            {
                for (int col = 0; col < 5; col++)
                {
                    if (objects[row][col] == "#" && objects[row][col + 1] == "-")
                    {
                        objects[row][col + 1] = "#";
                        objects[row][col] = "-";
                    }
                }
            }
        }
        for (int row = 0; row < 5; row++)
        {
            for (int col = 0; col < 5; col++)
            {
                cout << objects[row][col] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}