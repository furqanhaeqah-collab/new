#include <iostream>
using namespace std;
main()
{
    cout << "Enter the number of elements: ";
    int size;
    cin >> size;
    cout << "Enter the elements of array: ";
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int largest = 0;
    int smallest = array[0];

    // To find largest number
    for (int j = 0; j < size; j++)
    {
        if (largest < array[j])
        {
            largest = array[j];
        }
    }

    // To find smallest number
    for (int i = 0; i < size; i++)
    {
        if (smallest > array[i])
        {
            smallest = array[i];
        }
    }
    cout << largest << endl;
    cout << smallest << endl;
}