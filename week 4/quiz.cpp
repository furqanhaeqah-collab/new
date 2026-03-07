#include<iostream>
using namespace std;
main(){
    int n,n1,n2,n3,n4;
    cout<<"Enter a 4-digit number: ";
    cin>>n;
    n1 = n%10;
    n2 = (n/10)%10;
    n3 = (n/100)%10;
    n4 = (n/1000);
    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n3<<endl;
    cout<<n4<<endl;
    
}