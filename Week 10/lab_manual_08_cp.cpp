#include <iostream>
using namespace std;
void odd_even(int num);
main()
{
    int number;
    cout << "Enter a five digit number: ";
    cin >> number;
    odd_even(number);
}
void odd_even(int number)
{
    // To determine whether sum is even or odd
    int sum = 0, mod = 0;
    while (number > 0)
    {
        mod = number % 10;
        sum = sum + mod;
        number = number / 10;
    }
    if (sum % 2 == 0)
    {
        cout << "Evenish";
    }
    else
    {
        cout << "Oddish";
    }
}