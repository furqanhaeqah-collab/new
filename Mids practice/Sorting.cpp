#include <iostream>
using namespace std;
main()
{
    // Sorting are of 3 types
    // 1.Bubble sort
    // 2.Selection sort
    // 3.Insertion sort

    // For that purpose we will take the numbers that are unsorted
    cout << "Enter the amount of numbers you want to enter: ";
    int count;
    cin >> count;
    cout << "Enter the number, one per line: " << endl;
    int num[count];

    // To store the numbers in the variable we will create a loop
    for (int index = 0; index < count; index++)
    {
        cin >> num[index];
        // The numbers are stored in the int variable on [index] of array
    }

    // Code for Bubble Sort
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            // Condition to check the order
            if (num[j] > num[j + 1])
            {
                int swap = num[j];
                num[j] = num[j + 1];
                num[j + 1] = swap;
            }
        }
    }

    // Numbers after sorting
    cout << "Sorted Numbers are: " << endl;
    for (int i = 0; i < count; i++)
    {
        cout << num[i] << ", ";
    }

    // Code for selection sort
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (num[j] > num[j + 1])
            {
                int swap = num[j];
                num[j] = num[j + 1];
                num[j + 1] = swap;
            }
        }
    }

    // Numbers after sorting
    cout << endl
         << "Sorted Numbers are: " << endl;
    for (int i = 0; i < count; i++)
    {
        cout << num[i] << ", ";
    }
}