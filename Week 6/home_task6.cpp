#include<iostream>
using namespace std;
main(){
    int count;
    cout<<"Enter number of students: ";
    cin>>count;
    string array[count];
    cout<<"Enter names of "<<count<<" students: "<<endl;
    for(int i=0;i<count;i++){
        cin>>array[i];
    }
    int size=0;
    cout<<"Students in alphabetical order: "<<endl;
    for(int j=0;j<count-1;j++){
        for(int k=0;k<count-j-1;k++){
            if(array[k]>array[k+1]){
                string student=array[k];
                array[k]=array[k+1];
                array[k+1]=student;
            }
        }
    }
    for(int i=0;i<count;i++){
        cout<<array[i]<<endl;}
    }