#include<iostream>
using namespace std;
main(){
    int size;
    cout<<"Enter the number of resistors in the series circuit: ";
    cin>>size;
    float resistor[size];
    float sum=0;
    cout<<"Enter the resistance values (in ohms) of the "<<size<<" resistors, one per line: "<<endl;
    for(int i=0;i<size;i++){
        cin>>resistor[i];
        sum=resistor[i]+sum;
    }
    cout<<"The total resistance of the series circuit is "<<sum<<" ohms.";
}