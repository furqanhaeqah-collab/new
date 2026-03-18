#include<iostream>
using namespace std;
main(){
    string username;
    int pin;
    bool login=false;
    for(int i=0;i<5;i++){
        cout<<"Enter username: ";
        cin>>username;
        cout<<"Enter password: ";
        cin>>pin;
        if((username=="admin")&&(pin==1234)){
            cout<<"Login Successful"<<endl;
            login=true;
            break;
        }
        if((username!="admin")&&(pin!=1234)){
            cout<<"Try again"<<endl;
        }
    }
    char std[100][20];
    char course[100][20];
    int choice;
    int studentcount=0,coursecount=0;
    if(login==true){
        while(true){
            cout<<"~~~~~MAIN MENU~~~~~"<<endl;
            cout<<"1.Add Student"<<endl;
            cout<<"2.View Student"<<endl;
            cout<<"3.Add course"<<endl;
            cout<<"4.View course"<<endl;
            cout<<"5.Exit"<<endl;
            cout<<"Enter your choice: ";
            cin>>choice;
            if(choice==1){
                cout<<"Enter student name: ";
                cin>>std[studentcount];
                studentcount++;
            }
            else if(choice==2){
                for(int k=0;k<studentcount;k++){
                    cout<<"Student "<<k+1<<" : "<<std[k]<<endl;
                }
            }
            else if(choice==3){
                cout<<"Add your course: ";
                cin>>course[coursecount];
                coursecount++;
            }
            else if(choice==4){
                for(int m=0;m<coursecount;m++){
                    cout<<"Course "<<m+1<<" : "<<course[m]<<endl;
                }
            }
            else if(choice==5){
                cout<<"Exiting the program "<<endl;
                break;
            }
            else if(choice>5){
                cout<<"Invalid Input.Try again"<<endl;
            }
        }
    }
}