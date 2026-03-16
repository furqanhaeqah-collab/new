#include<iostream>
using namespace std;
main(){
    int length;
    cout<<"How many number of fibonacci series you want to print: ";
    cin>>length;
    int fibb=1;
    int n1=0,n2=1;
    cout<<n1<<",";
    for(int i=1;i<length-2;i++){  
        cout<<fibb<<",";
        fibb=n1+n2;
        n1=n2;
        n2=fibb;
    }

}  