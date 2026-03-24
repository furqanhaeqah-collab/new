#include<iostream>
using namespace std;
main(){
    string word;
    cout<<"Enter a string: ";
    getline(cin,word);
    cout<<"String with vowels removed: ";
    for(int i=0;word[i]!='\0';i++){
        if(word[i]!='a'&&word[i]!='e'&&word[i]!='o'&&word[i]!='u'
                &&word[i]!='i'&&word[i]!='A'&&word[i]!='E'
                &&word[i]!='I'&&word[i]!='O'&&word[i]!='U'){
                    cout<<word[i];
                }    
    }
}