#include<iostream>
using namespace std;
main(){
    int age,wash_mac_price,toy_price,n_toy=0,tp_toy;
    int money=0,total_money,remain_money,even_year_inc=10;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter washing machine price: ";
    cin>>wash_mac_price;
    cout<<"Enter toy price: ";
    cin>>toy_price;
    for(int i=1;i<=age;i++){
        if(i%2==0){
            money=(money+even_year_inc)-1;
            even_year_inc=even_year_inc+10;
        }
        else{
            n_toy++;
        }
    }
    tp_toy=n_toy*toy_price;
    total_money=tp_toy+money;
    remain_money=total_money-wash_mac_price;
    if(total_money>=wash_mac_price){
        cout<<"Yes!"<<endl<<remain_money;
    }
    else{
        cout<<"No!"<<endl<<-(remain_money);
    }
}