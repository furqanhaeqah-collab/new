#include <iostream>
using namespace std;
// Know which value of y will be printed out of the below 3
int y = 10;
void MyFunction()
{
    cout << "The value of the y is: " << y;
    int y = 20;
}
main()
{
    MyFunction();
    int y = 30;
    cout << "The value of y is: " << y;
    MyFunction();
}