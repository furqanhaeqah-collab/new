#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int array[size];
    cout << "Enter the number: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the window size: ";
    int window;
    cin >> window;
    int sum = 0, largest = 0,i=0;
    for(i; i < size-1;i++)
    {
        for(int j =0;j<size-i-1;j++){
        if (window == 2)
        {
            sum = array[i] + array[i + 1];
            if (sum > largest)
            {
                largest = sum;
                
            }
        }
        else if (window == 3)
        {
            sum = array[i] + array[i + 1] + array[i + 2];
            if (sum > largest)
            {
                largest = sum;
                
            }
        }
        else if (window == 4)
        {
            sum = array[i] + array[i + 1] + array[i + 2] + array[i + 3];
            if (sum > largest)
            {
                largest = sum;
            }
        }}
    }
    cout << "Largest number is: " << largest;
}