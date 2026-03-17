#include<iostream>
using namespace std;
main(){
    int num,largest=0,i=1;
    cout<<"Enter the number of elemnts: ";
    cin>>num;
    int array[num];
    cout<<"Enter "<<num<<" numbers, one per line: "<<endl;
    for(i;i<=num;i++){
       cin>>array[i];
    if(array[i]>largest){
    largest=array[i];
    }}
    cout<<"The largest number entered is: "<<largest;
}