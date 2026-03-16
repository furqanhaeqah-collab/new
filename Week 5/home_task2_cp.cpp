#include<iostream>
using namespace std;
main(){
    int length,num1,num2,fibb_series=1;
    cout<<"Enter the length of the fibonacci series: ";
    cin>>length;
    num1=0,num2=1;
    cout<<num1<<",";
    for(int i=1;i<length;i++){
        cout<<fibb_series<<",";
        fibb_series=num1+num2;
        num1=num2;
        num2=fibb_series;
    }
}