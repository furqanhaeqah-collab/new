#include<iostream>
using namespace std;
main(){
    int num=5;
    int array[num];
    for(int x=0;x<5;x++){
        cout<<"Enter "<<x+1<<" number: ";
        cin>>array[x];  
    }
    cout<<"1st number is: "<<array[0]<<endl;
    cout<<"Last number is: "<<array[4]<<endl;
}