#include<iostream>
using namespace std;
main(){
    char word[100];
    cout<<"Enter a string: ";
    cin.getline(word,100);
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