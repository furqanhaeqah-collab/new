#include<iostream>
using namespace std;

// Function prototype
void swapByReference(int &r, int &n);

// Main Function
main(){
    int a = 10;
    int b = 20;
    swapByReference(a,b);
    cout<<"Value of a: "<<a<<endl<<"Value of b: "<<b<<endl;
}

// void swapByReference
void swapByReference(int &r, int &n){
    int swap = r;
    r = n;
    n = swap;
}