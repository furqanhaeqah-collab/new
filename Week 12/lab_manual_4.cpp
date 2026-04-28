#include <iostream>
using namespace std;

// Function Prototype
void modifyWithPointer(int *p);
void modifyWithReference(int &r);

// Main Function
main()
{
    int a = 10;
    int b = 20;
    modifyWithPointer(&a);
    modifyWithReference(b);
    cout << "Value of a after pointer modification: " << a << endl;
    cout << "Value of b after reference modification: " << b << endl;
}

// modifyWithPointer
void modifyWithPointer(int *p)
{
    *p = 50;
}

// modifyWithReference
void modifyWithReference(int &r)
{
    r = 100;
}