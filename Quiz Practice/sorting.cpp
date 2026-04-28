#include <iostream>
using namespace std;
main()
{
    // Code to make array of specific size
    cout << "Enter the number of elements: ";
    int size;
    cin >> size;
    cout << "Enter the elements of array: ";
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    // Bubble sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }

    // Code for sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}