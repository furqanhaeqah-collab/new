#include<iostream>
using namespace std;
main(){
    int sum=0;
    int array[5];
    for(int x=0;x<5;x++){
        cout<<x+1<<" number is: ";
        cin>>array[x];
        sum=sum+array[x];
    }
    int average;
    average=sum/5;
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Average is: "<<average<<endl;
}