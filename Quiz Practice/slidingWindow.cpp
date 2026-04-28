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
    cout << "Enter the number of slides: ";
    int k;
    cin >> k;
    int current = 0;
    int sum[size];
    for (int i = 0; i < k; i++)
    {
        current = current + array[i];
        sum[0] = current;
    }
    for (int i = 1; i <= size - k; i++)
    {
        current = current - array[i - 1] + array[i + k - 1];
        sum[i] = current;
    }
    for (int i = 0; i < k; i++)
    {
        cout << sum[i] << endl;
    }
}