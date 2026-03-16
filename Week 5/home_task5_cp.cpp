#include<iostream>
using namespace std;
main(){
    int number,sum=0;
    cout<<"Enter a number: ";
    cin>>number;
    int digit;
    int i=number;
    while(i!=0){
        digit=i%10;
        sum=sum+digit;
        i=i/10;
    }
    cout<<"Sum of digits: "<<sum;
}