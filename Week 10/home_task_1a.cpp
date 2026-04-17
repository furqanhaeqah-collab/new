#include <iostream>
using namespace std;
// Know which value of x will be printed out of 2
int x = 10;
void myFunction()
{
    int x = 20;
}
main()
{
    cout << "The value of the x is: " << x;
}