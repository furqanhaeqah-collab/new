#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact=1;
    for(int i=n;i>=1;i--){
        cout<<i<<", ";
        fact = i*fact;
    }
    cout<<"Factorial of ("<<n<<") is: "<<fact;
}