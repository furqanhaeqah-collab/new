#include <iostream>
using namespace std;
main()
{
    cout << "Enter the number of digits: ";
    int count;
    cin >> count;
    cout << "Enter a number: ";
    int num[count];
    // Loop for taking an input
    for (int i = 0; i < count; i++)
    {
        bool already_entered = false;
        cin >> num[i];
        int check;
        if (num[i] == check)
        {
            cout << "Aready Entered number: " << num[i] << endl;
        }
        else
        {
            check = num[i];
        }
    }
    // Loop for writing unique Numbers
    cout << "Unique Numbers entered are: ";
    for (int i = 0; i < count; i++)
    {
        cout << num[i] << " ";
    }
}