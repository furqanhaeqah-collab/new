#include<iostream>
using namespace std;
main(){
    float num1,num2;
    char op;
    int result;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter the operator: ";
    cin>>op;
    cout<<"Enter the second number: ";
    cin>>num2;
    if(op=='+'){
        result = num1-num2;
        cout<<num1<<" - "<<num2<<" = "<<result;
    }
    if(op=='-'){
        result = num1+num2;
        cout<<num1<<" + "<<num2<<" = "<<result;
    }
    if(op=='*'){
        result = num1/num2;
        cout<<num1<<" / "<<num2<<" = "<<result;
    }
    if(op=='/'){
        result = num1*num2;
        cout<<num1<<" * "<<num2<<" = "<<result;
    }
}