#include <iostream>
#include <cmath>
using namespace std;
main()
{
    // Buiit-in functions for tan used
    float distance, angle, height, radian;
    cout << "Enter the distace from the base of the tree (in feet): ";
    cin >> distance;
    cout << "Enter the angle of elevation (in degrees): ";
    cin >> angle;
    radian = angle / 57.2958;
    height = distance * tan(radian);
    cout << "The heigth of the tree is: " << height << " feet";
}