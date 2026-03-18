#include<iostream>
using namespace std;
main(){
    int count;
    cout<<"Enter number of elements: ";
    cin>>count;
    int array[count];
    int largest=0,smallest=0;
    cout<<"Enter "<<count<<" numbers: "<<endl;
    for(int i=0;i<count;i++){
        cin>>array[i];
        smallest=array[0];
        if(array[i]>largest){
            largest=array[i];
        }
        if(array[i]<smallest){
            smallest=array[i];
        }
    }
    cout<<"Largest Number: "<<largest<<endl;
    cout<<"Smallest Number: "<<smallest<<endl;
}