#include<iostream>
using namespace std;
main(){
    int number,multiply;
    cout<<"Enter a number: ";
    cin>>number;
    for(int i=1;i<=10;i++){
        multiply=number*i;
        cout<<number<<" X "<<i<<" = "<<multiply<<endl;
    }
}