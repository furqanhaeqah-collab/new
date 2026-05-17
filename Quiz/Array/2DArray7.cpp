//Libraries used
#include<iostream>
using namespace std;

// Function prototype
void inputArray(int arrayA[][100],int arrayB[][100],int n);
void addMatrics(int arrayA[][100],int arrayB[][100],int result[][100],int n);
void printArray(int result[][100],int n);

// Main Function
main()
{
    cout<<"Enter size of nXn array: ";
    int n;
    cin>>n;
    int arrayA[n][100];
    int arrayB[n][100];
    int result[n][100];
    inputArray(arrayA,arrayB,n);
    addMatrics(arrayA,arrayB,result,n);
    printArray(result,n);
}

// Function used
void inputArray(int arrayA[][100],int arrayB[][100],int n){
    cout<<"Enter the elements of 1st array: ";
    for(int row=0;row<n;row++){
        for(int col =0;col<n;col++){
            cin>>arrayA[row][col];
        }
    }
    cout<<"Enter the elements of 2nd array: ";
    for(int row=0;row<n;row++){
        for(int col =0;col<n;col++){
            cin>>arrayB[row][col];
        }
    }
}
void addMatrics(int arrayA[][100],int arrayB[][100],int result[][100],int n){
    for(int row=0;row<n;row++){
        for(int col =0;col<n;col++){
            result[row][col] = arrayA[row][col]+arrayB[row][col];
        }
    }
}
void printArray(int result[][100],int n){
    cout<<"Result array: "<<endl;
    for(int row=0;row<n;row++){
        for(int col =0;col<n;col++){
            cout<<result[row][col]<<" ";
        }
        cout<<endl;
    }
}