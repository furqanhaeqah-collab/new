#include <iostream>
#include <cmath>
using namespace std;
main()
{
    // Buit-in function to fing the max number
    int number1, number2;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "Greatest Number: " << max(number1, number2);
}