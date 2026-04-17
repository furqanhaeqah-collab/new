#include <iostream>
using namespace std;
void IsSymmetrical(int num);
main()
{
    int n;
    cout << "Enter a three digit number: ";
    cin >> n;
    IsSymmetrical(n);
}
void IsSymmetrical(int n)
{
    // To know if number is symmetrical or not
    int temp = n, rn = 0;
    while (temp > 0)
    {
        int mod = temp % 10;
        rn = (rn * 10) + mod;
        temp = temp / 10;
    }
    if (n == rn)
    {
        cout << "The number is Symmetrical";
    }
    else if (rn != n)
    {
        cout << "The number is not Symmetrical";
    }
}