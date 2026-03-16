#include<iostream>
using namespace std;
main(){
    int number,digit,d;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Enter the digit: ";
    cin>>d;                      //d is the digit whose frequency we want to find
    int freq=0;
    for(number;number>0;number=number/10){
        digit = number%10;
        if(digit==d){
            freq = freq+1;
        }
    }
    cout<<"Frequency of "<<d<<" is: "<<freq;
}