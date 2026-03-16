#include<iostream>
using namespace std;
main(){
    string username="",course;
    int password=0;
    int selection;
    string name;
    int age;
    for(int i=1;i<=3;i++){
        cout<<"Enter username: ";
        cin>>username;
        cout<<"Enter password(in numbers): ";
        cin>>password;
        if(username=="admin"&&password==1234){
            cout<<"Login successful"<<endl;
            break;
        }
        else{
            cout<<"Try again"<<endl;
        }
        if(i==3&&(username!="admin"&&password!=1234)){
            cout<<"Too many attempts."<<endl<<"Program ended"<<endl;
        }
    }
    for(int j=1;j<=5;j++){
        if(username=="admin"&&password==1234){
            cout<<"------MAIN MENU---------"<<endl;
            cout<<"1----->Add Student      "<<endl;
            cout<<"2----->View Student     "<<endl;
            cout<<"3----->Add Course       "<<endl;
            cout<<"4----->Exit             "<<endl;
            cout<<"Please select any function from Main menu(1-4):";
            cin>>selection;
            if(selection==1){
                cout<<"Enter name of student: ";
                cin>>name;
                cout<<"Enter age of student: ";
                cin>>age;
                cout<<"Student added successfully"<<endl;
            }
            else if(selection==2){
                if(name!=""){
                    cout<<"Name: "<<name<<endl;
                    cout<<"Age: "<<age<<endl;
                }
                else{
                    cout<<"No Student record found"<<endl;
                }
            }
            else if(selection==3){
                cout<<"Enter Course Name: ";
                cin>>course;
                cout<<"Course added succesfully"<<endl;
            }
            else if(selection==4){
                cout<<"PROGRAM ENDS"<<endl;
                break;
            }
            else{
                cout<<"Invalid Choice"<<endl;
            }
        }
    }
}