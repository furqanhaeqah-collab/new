#include <iostream>
using namespace std;
main(){
    int size;
    cout<<"Enter the number of elements: ";
    cin>>size;
    int array[size];
    int count=0;
    int num;
    
    cout<<"Enter "<<size<<" numbers, one per line: "<<endl;
    for(int i=0;i<size;i++){ 
        cin>>num;
        bool isAlreadyEntered=false;
        for(int j=0;j<size;j++){
            
            if(array[j]==num){
                isAlreadyEntered=true;
                break;
            }
        }
        if(isAlreadyEntered==true){
            cout<<"Already Entered: "<<num<<endl;
        }
        else{
            array[count]=num;
            count++;
        }
    }
    cout<<"Unique numbers entered: ";
    for(int i=0;i<count;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}