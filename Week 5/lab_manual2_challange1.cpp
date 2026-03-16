#include<iostream>
using namespace std;
main(){
    int num1,num2;
    int GCD,LCM;
    int n1,n2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    n1=num1,n2=num2;
    while(n2!=0){
        int temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    GCD=n1;
    LCM=(num1*num2)/GCD;
    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<GCD<<endl;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<LCM<<endl;
}