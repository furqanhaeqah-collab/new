#include<iostream>
using namespace std;
main(){
    string uni_go;
    cout<<"Are your friends going??(yes/no)";
    cin>>uni_go;
    if(uni_go == "yes"){
        cout<<"You are also going";
    }
    if(uni_go == "no"){
        cout<<"You are not going";
    }
}