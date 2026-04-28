#include <iostream>
using namespace std;

// Function prototype
void reverseByPointer(int arr[]);

// Main Function
main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverseByPointer(arr);
}

// reverseByPointer
void reverseByPointer(int arr[])
{
    int *p = arr;
    cout<<"Reversed Array: "<<endl;
    for (int i = 4; i >= 0; i--)
    {
        cout<<*(p + i)<<endl;
    }
}