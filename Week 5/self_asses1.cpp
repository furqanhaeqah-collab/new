#include<iostream>
using namespace std;
main(){
    int n=0;
    int sum = 0;
    while(n > -1){
        cout<<"Enter a number(enter a negative number to exit): ";
        cin>>n;
        if(n>0){
            sum = sum+n; 
        }   
    }
    cout<<"Sum is: "<<sum<<endl;
}