#include<iostream>
using namespace std;
main(){
    int amount,discount,after_discount;
    cout<<"Enter your bill: ";
    cin>>amount;
    if(amount <= 5000){
        discount = (amount*5)/100;
        after_discount = amount - discount;
        cout<<"Your discounted bill is: "<<after_discount;
    }
    else{
        discount = (amount*10)/100;
        after_discount = amount - discount;
        cout<<"Your discounted bill is: "<<after_discount;
    }
}