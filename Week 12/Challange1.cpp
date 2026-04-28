#include<iostream>
using namespace std;

// Function prototype
void swapByPointer(int *a, int *b);

// Main Function
main(){
    int x = 10;
    int y = 20;
    swapByPointer(&x,&y);
    cout<<"Value of x: "<<x<<endl<<"Value of y: "<<y;
}

// void swapByPointer
void swapByPointer(int *a, int *b){
    int swap = *a;
    *a = *b;
    *b = swap;
}