#include<iostream>
using namespace std;
main(){
    int largest = 0;
    int size;
    cout<<"Enter the number of elements: ";
    cin>>size;
    int num[size];
    cout<<"Enter "<<size<<" numbers, one per line: "<<endl;
    for(int i =0;i<size;i++){
        cin>>num[i];
        if(num[i]>largest){
            largest = num[i];
        }
    }
    cout<<"Largest number is: "<<largest;
}