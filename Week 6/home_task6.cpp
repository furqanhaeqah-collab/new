#include<iostream>
using namespace std;
main(){
    int count;
    cout<<"Enter number of students: ";
    cin>>count;
    string array[count];
    cout<<"Enter names of "<<count<<" students: "<<endl;
    for(int ind=0;ind<count;ind++){
        cin>>array[ind];
    }
    cout<<"Students in alphabetical order: "<<endl;
    for(int i=0;i<count-1;i++){
        for(int j=i+1;j<count;j++){
            if(array[j]<array[i]){
                string name=array[j];
                array[j]=array[i];
                array[i]=name;
            }
        }
    }
    for(int k=0;k<count;k++){
        cout<<array[k]<<endl;
    }
    }