#include<iostream>
using namespace std;
main(){
    int num1,num2;
    int GCD,LCM;
    int number1,number2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    number1=num1,number2=num2;
    while(number2!=0){
        int gcd_ans=number2;
        number2=number1%number2;
        number1=gcd_ans;
    }
    GCD=number1;
    LCM=(num1*num2)/GCD;
    cout<<"GCD: "<<GCD<<endl;
    cout<<"LCM: "<<LCM<<endl;
}