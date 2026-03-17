#include<iostream>
using namespace std;
main(){
    char array[100];
    cout<<"Enter a string: ";
    cin>>array;
    int i;
    for(i=0;array[i]!='\0';i++){
        i;
    }
    cout<<"Reversed string: ";
    for(int index=i-1;index>=0;index--){
        cout<<array[index];
    }
}