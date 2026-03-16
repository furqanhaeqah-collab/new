#include<iostream>
using namespace std;
main(){
    int select;
    string book_name,borrow_book,issue_book;
    while(true){
        cout<<"----Library System----"<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. View Book"<<endl;
        cout<<"3. Borrow Book"<<endl;
        cout<<"4. Issue Book"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice(1-5): ";
        cin>>select;
        if(select==1){
            cout<<"Enter book name: ";
            cin>>book_name;
            cout<<"You added a book: "<<book_name<<endl;
        }
        else if(select==2){
            cout<<"Books to view: "<<book_name<<endl;
        }
        else if(select==3){
            cout<<"Book to be borrowed: ";
            cin>>borrow_book;
        }
        else if(select==4){
            cout<<"Book you want to be issued: ";
            cin>>issue_book;
        }
        else if(select==5){
            cout<<"Exiting Library System. Goodbye!"<<endl;
        break;
        }
        else{
            cout<<"Invalid Choice"<<endl;
        }
    }
}