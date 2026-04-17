#include <iostream>
using namespace std;
int multiply(int num1);
main()
{
    int n1, result;
    cout << "Enter a number: ";
    cin >> n1;
    result = multiply(n1);
    cout << "Output is: " << result;
}
int multiply(int num1)
{
    int cal;
    cal = num1 * 5;
    return cal;
}