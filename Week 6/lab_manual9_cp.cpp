#include<iostream>
using namespace std;
main(){
    float total,due,remaining_amaount;
    float array[4];
    bool payable=false;
    cout<<"Enter quarters: ";
    cin>>array[0];
    cout<<"Enter dimes: ";
    cin>>array[1];
    cout<<"Enter nickels: ";
    cin>>array[2];
    cout<<"Enter pennies: ";
    cin>>array[3];
    cout<<"Enter the total amount due: $";
    cin>>due;
    array[0]=array[0]*0.25;
    array[1]=array[1]*0.10;
    array[2]=array[2]*0.05;
    array[3]=array[3]*0.01;
    total=array[0]+array[1]+array[2]+array[3];
    remaining_amaount=total-due;
    if(remaining_amaount>=0){
        payable=true;
    }
    if(payable==true){
        cout<<"Can you pay the amount? Yes";
    }
    else{
        cout<<"Can you pay the amount? No";
    }
}