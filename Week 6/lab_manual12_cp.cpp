#include<iostream>
using namespace std;
main(){
    int size,index=0;
    bool even=false; 
    bool odd=false;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    cout<<"Enter the "<<size<<" elements of the array: "<<endl;
    for(index;index<size;index++){
        cin>>array[index];
        if(index%2==0 && array[index]%2==0){
            even=true;
        }
        if(index%2!=0 && array[index]%2!=0){
            odd=true;
        }
    }
    if(even==true&&odd==true){
        cout<<"The array is special ";
    }
    else{
        cout<<"The array is not special";
    }
}