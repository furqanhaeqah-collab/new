#include<iostream>
using namespace std;
main(){
    int n,sum = 0;
    int i;
    for(int i = 1;i <= 5;i=i+1 ){
        cout<<" Enter number: ";
        cin>>n;
        sum = sum+n;     
    }
        cout<<sum<<endl;
}