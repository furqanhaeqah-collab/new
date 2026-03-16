#include<iostream>
using namespace std;
main(){
    int n=0,sum=0;
    while(n>=0){
        sum=sum+n;
        cout<<"Enter a positive number: ";
        cin>>n;
    }
    cout<<"Sum is: "<<sum;
}