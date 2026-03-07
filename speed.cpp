#include<iostream>
using namespace std;
main(){
    float speed;
    string info;
    cout<<"Enter Speed: ";
    cin>>speed;
    if(speed<=10){
        cout<<"Slow";
    }
    if(speed>10){
        if(speed<=50){
            cout<<"Average";
        }
    }
    if(speed>50){
        if(speed<=150){
            cout<<"Fast";
        }
    }
    if(speed>150){
        if(speed<=1000){
            cout<<"Ultra Fast";
        }
    }
    if(speed>1000){
        cout<<"Extremely Fast";
    }
}