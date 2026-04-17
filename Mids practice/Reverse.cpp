#include<iostream>
using namespace std;
main(){
    string word;
    cout<<"Enter a string: ";
    getline(cin,word);
    cout<<"Reverse String: ";
    int len = word.length();
    for(int i =len;i>=0;i--){
        cout<<word[i];
    }
}