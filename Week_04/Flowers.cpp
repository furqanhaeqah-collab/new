#include<iostream>
using namespace std;
main(){
    int no_rr,no_wr,no_t;
    float price_rr,price_wr,price_t,discount,discounted_price,total_price;
    cout<<"Red Rose: ";
    cin>>no_rr;
    cout<<"White Rose: ";
    cin>>no_wr;
    cout<<"Tulips: ";
    cin>>no_t;
    price_rr = 2.00,price_wr = 4.10,price_t = 2.50;
    total_price = (price_rr*no_rr)+(price_wr*no_wr)+(price_t*no_t);
    if(total_price>200){
        discount = (total_price*20)/100;
    }
    discounted_price = total_price-discount;
    cout<<"Original Price: "<<total_price<<endl;
    cout<<"Price after Discount: "<<discounted_price;
}