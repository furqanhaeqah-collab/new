#include <iostream>
using namespace std;
main()
{
    cout << "Enter the number of digits: ";
    int size, count = 0;
    cin >> size;
    int array[size];
    cout << "Enter a number: ";
    int num;
    bool already_entered = false;
    // Loop for taking an input
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        int check;
        for (int j = 0; j < size; j++)
        {
            if (array[j] == num)
            {
                already_entered = true;
            }
        }
        if (already_entered = true)
        {
            cout << "Already Entered : " << num;
        }
        else
        {
            array[count] = num;
            count++;
        }
    }
    // Loop for writing unique Numbers
    cout << "Unique Numbers entered are: ";
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
}