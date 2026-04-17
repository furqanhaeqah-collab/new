#include <iostream>
#include <cmath>
using namespace std;

// Global Variable
float trainingDays = 0.1;   // 10%
int totalWorkingHours = 10; // 8 regular hours and 2 extra hours

// Function Prototype
void projectTimeCalculation(float h, int d, int w);

// Main Function
main()
{
    float hours;
    cout << "Enter needed hours: ";
    cin >> hours;
    int days;
    cout << "Enter the number of days: ";
    cin >> days;
    int workers;
    cout << "Enter number of workers: ";
    cin >> workers;
    projectTimeCalculation(hours, days, workers);
}
// Project Time Calculator
void projectTimeCalculation(float hour, int days, int workers)
{
    // Step 1: Calculate 10% of days
    // Step 2: Subtract from total number of days
    // Step 3: Then multiply 10 with the calculated days
    // Step 4: Subtract the calculated time from the given hours and multiply with no. of workers
    // Step 5: Store the calculated output
    float tDays = days * trainingDays;
    float calculatedDays = days - tDays;
    float totalHours = calculatedDays * 10 * workers;
    float calculatedHours = floor(totalHours - hour);
    if (calculatedHours >= 0)
    {
        cout << "Yes! " << calculatedHours << " hours left.";
    }
    else
    {
        cout << "Not enough time! " << -1 * calculatedHours << " hours needed.";
    }
}