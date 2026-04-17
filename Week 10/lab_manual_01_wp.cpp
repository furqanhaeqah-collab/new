#include <iostream>
using namespace std;
void addition(int n1, int n2);
main()
{
    int num1, num2;
    cout << "Enter number 01: ";
    cin >> num1;
    cout << "Enter number 02: ";
    cin >> num2;
    addition(num1, num2);
}
// To add all the numbers
void addition(int number1, int number2)
{
    cout << "Sum: " << number1 + number2;
};