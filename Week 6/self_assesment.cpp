#include<iostream>
using namespace std;
main(){
    string word;
    cout<<"Enter a string: ";
    cin>>word;
    int index=0;
    while(word[index]!='\0'){
        index++;
        index; 
    }
    if(index%2==0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}