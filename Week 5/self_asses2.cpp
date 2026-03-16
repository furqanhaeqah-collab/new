#include<iostream>
using namespace std;
main(){
    string name;
    while(name!="END"){ 
        cout<<"Enter name(enter END to exit): ";
        cin>>name;
        cout<<"Hello "<<name<<endl;
    }
    cout<<"Program Ends";
}
    