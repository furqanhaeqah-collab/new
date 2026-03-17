#include<iostream>
using namespace std;
main(){
    int number;
    cout<<"Enter the number of arrays you want to create: ";
    cin>>number;
    int array[number];
    for(int x=0;x<number;x++){
        cout<<x+1<<" number is: ";
        cin>>array[x];
    }
}