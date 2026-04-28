#include <iostream>
using namespace std;

// Main Function
main()
{
    int x = 10;
    int &ref = x;
    cout << "Actual value of x: " << x << endl;
    ref = 22;
    cout << "Modified value of x: " << x << endl;
}