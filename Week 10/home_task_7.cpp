#include <iostream>
using namespace std;

// Function prototype
float calculateBalance(float balance, int years);

// Global variable
float condition1 = 0.05;
float condition2 = 0.07;
float condition3 = 0.1;
float yearCondition = 0.02;

// Main Function
main()
{
    float balance;
    int years;
    cout << "Enter balance and years: " << endl;
    cin >> balance;
    cin >> years;
    float result = calculateBalance(balance, years);
    cout << "Updated Balance: " << result;
}

// calculateBalance Function
float calculateBalance(float balance, int years)
{
    float interest, totalBalance;
    if (balance < 10000)
    {
        interest = balance * condition1;
        if (years >= 3)
        {
            interest = interest + (balance * yearCondition);
        }
    }
    if (balance >= 10000 && balance <= 50000)
    {
        interest = balance * condition2;
        if (years >= 3)
        {
            interest = interest + (balance * yearCondition);
        }
    }
    if (balance > 50000)
    {
        interest = balance * condition3;
        if (years >= 3)
        {
            interest = interest + (balance * yearCondition);
        }
    }
    totalBalance = balance + interest;
    return totalBalance;
}