#include <iostream>
using namespace std;

// Function prototype
void reverseByPointer(int arr[],int len);

// Main Function
main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    reverseByPointer(arr,len);
}

// reverseByPointer
void reverseByPointer(int arr[],int len)
{
    int *p = arr;
    cout << "Reversed Array: " << endl;
    for (int i = len; i >= 0; i--)
    {
        cout << *(p + i) << endl;
    }
}