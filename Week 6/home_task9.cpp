#include<iostream>
using namespace std;
main(){
    cout<<"Library System"<<endl;
    string addbook[100];
    string borrowbook[100];
    int choice;
    int bookcount=0;
    int bookcount1=0;
    while(true){
        cout<<"----MAIN MENU----"<<endl;
        cout<<"1.Add Books"<<endl;
        cout<<"2.View Books"<<endl;
        cout<<"3.Borrow Books"<<endl;
        cout<<"4.View Books"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice(1-5): ";
        cin>>choice;
        if(choice==1){
            cout<<"Enter the name of book: ";
            cin>>addbook[bookcount];
            bookcount++;
        }
        if(choice==2){
            for(int i=0;i<bookcount;i++){
            cout<<"Book "<<i+1<<" is: "<<addbook[i]<<endl;
            }
        }
        if(choice==3){
            cout<<"Enter the name of book: ";
            cin>>borrowbook[bookcount1];
            bookcount1++;
        }
        if(choice==4){
            for(int j=0;j<bookcount1;j++){
                cout<<"Book "<<j+1<<" is: "<<borrowbook[j]<<endl;
            }
        }
        if(choice==5){
            cout<<"Exiting program"<<endl;
            break;
        }
    }
}