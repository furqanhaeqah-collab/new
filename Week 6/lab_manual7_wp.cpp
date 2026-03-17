#include<iostream>
using namespace std;
main(){
    string word;
    char letter;
    cout<<"Enter the word: ";
    cin>>word;
    cout<<"Enter the letter: ";
    cin>>letter;
    bool is_found=false;
    for(int index=0;word[index]!='\0';index++){
        if(word[index]==letter){
            is_found=true;
            break;
        } 
    }
    if(is_found==true){
        cout<<letter<<" is found in "<<word<<endl;
    }
    else{
        cout<<letter<<" is not found in "<<word<<endl;
    }
}