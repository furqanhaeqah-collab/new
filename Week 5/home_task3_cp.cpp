#include<iostream>
using namespace std;
main(){
    int number,count=0;
    cout<<"Enter a number: ";
    cin>>number;
    int i;
    for(i=number;i!=0;i=i/10){
        count++;
    }
    for(i=number;i<=0;i=i/10){
        count++;
        break;
    }
    cout<<"Total number of digits: "<<count;
}