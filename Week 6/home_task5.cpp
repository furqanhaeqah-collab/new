#include<iostream>
using namespace std;
main(){
    int num=0;
    int count;
    cout<<"Enter number of customers: ";
    cin>>count;
    string array[count];
    char check;
    cout<<"Enter names of "<<count<<" customers: "<<endl;
    for(int i=0;i<count;i++){
        cin>>array[i];
    }
    cout<<"Enter a letter to check: ";
    cin>>check;
    for(int j=0;j<count;j++){
        if(array[j][0]==check){
            num++;
        }
    }
    cout<<"Total names starting with '"<<check<<"': "<<num;
}