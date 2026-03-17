#include<iostream>
using namespace std;
main(){
    int select;
    int num1,num2,result;
    while(true){
        cout<<"-----Simple Calculator-----"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Sutraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Clear screen"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice(1-6): ";
        cin>>select;
        if(select==1){
            cout<<"Enter first number: ";
            cin>>num1;
            cout<<"Enter second number: ";
            cin>>num2;
            result=num1+num2;
            cout<<"Result: "<<result<<endl;
        }
        else if(select==2){
            cout<<"Enter first number: ";
            cin>>num1;
            cout<<"Enter second number: ";
            cin>>num2;
            result=num1-num2;
            cout<<"Result: "<<result<<endl;
        }
        else if(select==3){
            cout<<"Enter first number: ";
            cin>>num1;
            cout<<"Enter second number: ";
            cin>>num2;
            result=num1*num2;
            cout<<"Result: "<<result<<endl;
        }
        else if(select==4){
            cout<<"Enter first number: ";
            cin>>num1;
            cout<<"Enter second number: ";
            cin>>num2;
            result=num1*num2;
            result=num1/num2;
            cout<<"Result: "<<result<<endl;
        }
        else if(select==5){
            cout<<"Screen Cleared"<<endl;
        }
        else if(select==6){
            cout<<"Exiting calculator.Goodbye!"<<endl;
            break;
        }
        else{
            cout<<"Invalid choice..."<<endl;
        }

    }
}