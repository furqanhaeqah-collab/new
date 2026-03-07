#include<iostream>
using namespace std;
main(){
    string password = "pass1234",password_input;
    cout<<"Enter Password";
    cin>>password_input;
    if(password_input == password){
        cout<<"Wow ! you have cracked the code!";
    }
    else{
        cout<<"It is not that simple,Try Again";
    }
}