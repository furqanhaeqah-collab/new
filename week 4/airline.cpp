#include<iostream>
using namespace std;
main(){
    string country;
    int ticket_price,discount,discounted_price,total_price;
    cout<<"Country: ";
    cin>>country;
    cout<<"Ticket Price: ";
    cin>>ticket_price;
    if(country=="Ireland"){
        discount = 10;
        discounted_price = (ticket_price*discount)/100;
        total_price = ticket_price - discounted_price;
        cout<<"Discounted price: "<<total_price;
    }
    else{
        discount = 5;
        discounted_price = (ticket_price*discount)/100;
        total_price = ticket_price - discounted_price;
        cout<<"Discounted price: "<<total_price;
    }
    
}