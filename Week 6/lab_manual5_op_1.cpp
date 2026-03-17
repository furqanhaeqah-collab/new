#include<iostream>
using namespace std;
main(){
    int size;
    cout<<"Enter the number of elements: ";
    cin>>size;
    bool isAlreadyEntered=false;
    int index;
    int array[size];
    cout<<"Enter "<<size<<" numbers, one per line: ";
    cout<<endl;
    for(index=0;index<size;index++){
        cin>>array[index];
        for(int j=1;array[j]!='\0';j++){
            if(array[j]==array[0]){
            isAlreadyEntered=true;
            cout<<"Already entered: "<<array[index]<<endl;
            }
        }
    }
    // cout<<"Unique numbers entered: ";
    // for(int i=1;i<=size;i++){
    //     if(array[index]==array[i]){
    //     continue;
    //     cout<<array[i]<<" ";
    // }
    // }
}