#include<iostream>
using namespace std;
main(){
    char word[100];
    cout<<"Enter a string: ";
    cin.getline(word,100);
    cout<<"String with vowels removed: ";
    for(int i=0;word[i]!='\0';i++){
        if(word[i]!='a'&&word[i]!='e'&&word[i]!='o'&&word[i]!='u'
                &&word[i]!='i'&&word[i]!='A'&&word[i]!='E'
                &&word[i]!='I'&&word[i]!='O'&&word[i]!='U'){
                    cout<<word[i];
                }    
    }
}