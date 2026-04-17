#include <iostream>
using namespace std;
void calculatePoolState(int num1, int num2, int num3, float num4);
main()
{
    int volume, pipe1, pipe2;
    float hour;
    cout << "Enter the volume of pool in litres: ";
    cin >> volume;
    cout << "Enter the flow rate of the first pipe per hour: ";
    cin >> pipe1;
    cout << "Enter the flow rate of second pipe per hour: ";
    cin >> pipe2;
    cout << "Enter the hours the worker is absent: ";
    cin >> hour;
    calculatePoolState(volume, pipe1, pipe2, hour);
}
void calculatePoolState(int v, int p1, int p2, float h)
{
    float TotalWater = (p1 + p2) * h;
    float poolPercentage;
    int pipe1Percentage, pipe2Percentage;
    int overFlow;
    if (TotalWater <= v)
    {
        // Pool Fill Percentage
        poolPercentage = (TotalWater / v) * 100;
        pipe1Percentage = (p1 * h / TotalWater) * 100;
        pipe2Percentage = (p2 * h / TotalWater) * 100;
        cout << "Pipe is " << poolPercentage << " full. Pipe 1: "
             << pipe1Percentage << "%. Pipe2: " << pipe2Percentage << "%. ";
    }
    else if (TotalWater > v)
    {
        // Overflow Calculation
        overFlow = TotalWater - v;
        cout << "For " << h << " hours, the pool overflows with "
             << overFlow << " liters.";
    }
}