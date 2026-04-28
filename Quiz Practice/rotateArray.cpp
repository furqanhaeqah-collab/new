#include <iostream>
using namespace std;

// Main Function
main()
{
    cout << "Enter the number of elements: ";
    int size;
    cin >> size;
    cout << "Enter the elements of array: " << endl;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the number of rotations: ";
    int rotation;
    cin >> rotation;

    // Code to rotate to right side
    int array1[size], array2[size];
    int count1 = 0, count2 = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        array1[count1] = array[i];
        count1++;
    }
    for (int i = rotation - 1; i >= 0; i--)
    {
        array2[count2] = array1[i];
        count2++;
    }
    count2 = rotation;
    for (int i = size - 1; i >= rotation; i--)
    {
        array2[count2] = array1[i];
        count2++;
    }
    cout << "Rotated array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array2[i] << endl;
    }
}