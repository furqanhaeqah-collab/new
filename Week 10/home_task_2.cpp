#include <iostream>
#include <cmath>
using namespace std;

// Global variables
float pow_9_meter = pow(10, 9);
float pow_6_meter = pow(10, 6);

// Function prototype
float pyramidVolume(float measurement[], string unit);

// Main Function
main()
{
    float measurement[3];
    cout << "Enter length,width and height (in meters): ";
    for (int i = 0; i < 3; i++)
    {
        cin >> measurement[i];
    }
    string unit;
    cout << "Enter output unit(millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    float result = pyramidVolume(measurement, unit);
    cout << result << " cubic " << unit;
}

//pyramidVolume Function
float pyramidVolume(float m[], string unit)
{
    float volume = 1;
    for (int i = 0; i < 3; i++)
    {
        volume = m[i] * volume;
    }
    volume = volume / 3;
    if (unit == "kilometers")
    {
        volume = volume / pow_9_meter;
    }
    else if (unit == "centimeters")
    {
        volume = volume * pow_6_meter;
        float pow_6_meter = pow(6, 10); // Local variable
    }
    else if (unit == "millimeters")
    {
        volume = volume * pow_9_meter;
        float pow_9_meter = pow(9, 10); // Local Variable
    }
    return volume;
}