#include <iostream>
using namespace std;

// Function prototype
void reverseByPointer(int arr[],int len);

// Main Function
main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = 5;
    reverseByPointer(arr,len);
}

// reverseByPointer
void reverseByPointer(int arr[],int len)
{
    int *p = arr;
    cout << "Reversed Array: " << endl;
    for (int i = len-1; i >= 0; i--)
    {
        cout << *(p + i) << endl;
    }
}