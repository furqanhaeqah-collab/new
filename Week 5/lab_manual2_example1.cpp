#include<iostream>
using namespace std;
main(){
    char word='y';
    //If ch is equal to y the program will continue      
    while(word=='y'){                  
        cout<<"I am happy:-)"<<endl;
        cout<<"Enter y to continue or any key to exit: ";
        cin>>word; 
    }
}