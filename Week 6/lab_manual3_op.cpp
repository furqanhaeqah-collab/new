#include<iostream>
using namespace std;
main(){
    string word;
    cout<<"Enter a string: ";
    getline(cin,word);
    for(int index=0;word[index]!='\0';index++){
        if(word[index]=='z'){
            word[index]='a';
        }
        else if(word[index]=='Z'){
            word[index]='A';
        }
        else{
            word[index]=word[index]+1;
        }
    }
    cout<<"Shifted string: "<<word;
}