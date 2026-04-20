#include <iostream>
using namespace std;
bool IsSymmetrical(int num);
main()
{
    int n;
    cout << "Enter a three digit number: ";
    cin >> n;
    bool result = IsSymmetrical(n);
    if (result == false)
    {
        cout << "Number is not symmetrical";
    }
    else
    {
        cout << "Number is Symmetrical";
    }
}
bool IsSymmetrical(int n)
{
    // To know if number is symmetrical or not
    int temp = n, rn = 0;
    while (temp > 0)
    {
        int mod = temp % 10;
        rn = (rn * 10) + mod;
        temp = temp / 10;
    }
    bool symmetrical = false;
    if (n == rn)
    {
        symmetrical = true;
    }
    else
    {
        symmetrical = false;
    }
    return symmetrical;
}