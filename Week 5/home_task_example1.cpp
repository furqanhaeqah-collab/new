#include<iostream>
using namespace std;
main(){
    while(true){
        int select;
        cout<<"------MENU------"<<endl;
        cout<<"1.Say Hello"<<endl;
        cout<<"2.Say Goodbye"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Select a number(1-3): ";
        cin>>select;
        if(select==1){
            cout<<"Hello! Welcome to the program."<<endl;
        }
        else if(select==2){
            cout<<"Goodbye! Have a nice day."<<endl;
        }
        else if(select==3){
            cout<<"Program ends"<<endl;
            break;
        }
        else{
            cout<<"Invalid choice!"<<endl;
        }
    }
}