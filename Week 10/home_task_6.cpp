#include <iostream>
using namespace std;

// Function prototype
string isStrong(int num);

// Global Variable
bool strongCheck = false;

// Main Function
main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    string result = isStrong(number);
    if (result == "true")
    {
        cout << "Strong number";
    }
    else
    {
        cout << "Not Strong Number";
    }
}

// isStrong Function
string isStrong(int n)
{
    int temp = n;
    int mod;
    int ans = 0;
    string answer = "false";
    while (temp != 0)
    {
        mod = temp % 10;
        temp = temp / 10;
        int fac = 1;
        for (int i = 1; i <= mod; i++)
        {
            fac = i * fac;
        }
        ans = ans + fac;
    }
    if (n == ans)
    {
        answer = "true";
    }
    else
    {
        answer = "false";
    }
    return answer;
}