#include<iostream>
using namespace std;
main(){
    char Array[100];
    cout<<"Enter a word: ";
    cin>>Array;
    for(int index=0;Array[index]!='\0';index++){
        cout<<Array[index]<<" found at position "<<index<<endl;
    }
} 