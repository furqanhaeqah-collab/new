#include<iostream>
using namespace std;
main(){
    string name1,name2;
    cout<<"Enter the first name: ";
    cin>>name1;
    cout<<"Enter the second name: ";
    cin>>name2;
    if(name1 == name2){
        cout<<"Yes,the words are the same";
    }
    else{
        cout<<"No,the words are different";
    }
}