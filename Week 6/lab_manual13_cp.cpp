#include<iostream>
using namespace std;
main(){
    int chord;
    cout<<"Enter the number number of chords: ";
    cin>>chord;
    string array[chord];
    cout<<"Enter "<<chord<<" chords, one per line: "<<endl;
    for(int i=0;i<chord;i++){
        cin>>array[i];
    }
    for(int j=0;j<chord;j++){
        int len = array[j].length();
        if(array[j][len-1]!='7'){
            array[j]=array[j]+"7";
        }
    }
    cout<<"Jazzified chords: [";
    for(int k=0;k<chord;k++){
        cout<<array[k]<<",";
    }
    cout<<"]";
}