#include <iostream>
using namespace std;

// Main Function
main()
{
    int x = 10;
    int *ptr = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value at pointer ptr: " << *ptr << endl;
}