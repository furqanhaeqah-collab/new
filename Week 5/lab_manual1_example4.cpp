#include<iostream>
using namespace std;
main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    int count=0;
    for(int i=n;i>0;i=i/10){
        count++;
    }
    cout<<"Total number of digits: "<<count;
}