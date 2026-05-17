#include<iostream>
using namespace std;

// Function prototype
void inputArray(int array[][100],int row,int col);
void colSumArray(int array[][100],int row,int col);

// Main Function
main()
{
    cout<<"Enter the row of array: ";
    int row;
    cin>>row;
    cout<<"Enter the column of array: ";
    int col;
    cin>>col;
    int array[row][100];
    inputArray(array,row,col);
    colSumArray(array,row,col);
}

// Function code
void inputArray(int array[][100],int rowSize,int colSize)
{
    cout<<"Enter the elements of 2D array: "<<endl;
    for(int row =0;row<rowSize;row++)
    {
        for(int col =0;col<colSize;col++)
        {
            cin>>array[row][col];
        }
        cout<<endl;
    }
}
void colSumArray(int array[][100],int rowSize,int colSize)
{
    int sum[colSize] = {0};
    for(int col =0;col<colSize;col++)
    {
        for(int row =0;row<rowSize;row++)
        {
            sum[col] = sum[col] + array[row][col];
        }
    }
    for (int col = 0; col < colSize; col++)
    {
        cout << "The sum of the " << col + 1 << " is: " << sum[col] << endl;
    }
}