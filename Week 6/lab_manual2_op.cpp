#include<iostream>
using namespace std;
main(){
    string array;
    cout<<"Enter a string: ";
    cin>>array;
    int i=0;
    int ind;
    while(array[i]!='\0'){
        i++;
        ind=i;
    }
    cout<<"Reversed string: ";
    for(int j=ind;j>=0;j--){
        cout<<array[j];
    }
}