#include <iostream>
#include <cmath>
using namespace std;
main()
{
    // Using buit-in function to know the minimum number
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Tne minimum of " << num1 << " and " << num2 << " is: " << min(num1, num2);
}