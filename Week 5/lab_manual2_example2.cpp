#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    while(n<0){
        cout<<"Error "<<n<<" is a negative number"<<endl;
        cout<<"Enter a positive integer: ";
        cin>>n;
    }
    cout<<"Program ends";
}