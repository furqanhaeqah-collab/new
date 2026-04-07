#include <iostream>
using namespace std;
main()
{
    // using not operator( ! )
    bool output = false;
    int x = 3;
    int y = 2;
    int z = 0;
    if (!(z != 0 || x == 2))
    {
        output = true;
    }
    cout << output;

    // Fibonacci series
    cout << "Enter the number of fibonacci series : ";
    int fibb;
    cin >> fibb;
    int num1 = 0, num2 = 1, sum = 0;
    cout << num1 << ", " << num2 << ", ";
    for (int i = 1; i < fibb; i++)
    {
        sum = num1 + num2;
        cout << sum << ", ";
        num1 = num2;
        num2 = sum;
    }

    // Calculating GCD and LCM
    cout << "Enter the 1st number: ";
    int num1;
    cin >> num1;
    cout << "Enter the 2nd number: ";
    int num2;
    cin >> num2;
    int temp_num1 = num1;
    int temp_num2 = num2;
    while (temp_num2 != 0)
    {
        int swap = temp_num2;
        temp_num2 = temp_num1 % temp_num2;
        temp_num1 = swap;
    }
    int gcd_ans = temp_num1;
    cout << "GCD is: " << gcd_ans << endl;
    int lcm_ans = (num1 * num2) / gcd_ans;
    cout << "LCM is : " << lcm_ans << endl;
}