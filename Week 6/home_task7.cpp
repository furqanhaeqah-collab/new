#include<iostream>
using namespace std;
main(){
    int count;
    cout<<"Enter number of products: ";
    cin>>count;
    string product_name[count];
    float product_price[count];
    float product_quantity[count];
    float price_per_quantity[count];
    for(int i=0;i<count;i++){
        cout<<"Enter the name of product "<<i+1<<": ";
        cin>>product_name[i];
        cout<<"Enter the price of "<<product_name[i]<<": $";
        cin>>product_price[i];
        cout<<"Enter quantity of "<<product_name[i]<<": ";
        cin>>product_quantity[i];
        price_per_quantity[i]=product_price[i]*product_quantity[i];
    }
    cout<<"Product Inventory Report"<<endl;
    cout<<"------------------------"<<endl;
    for(int j=0;j<count;j++){
        cout<<product_name[j]<<": $"<<product_price[j]<<", "<<product_quantity[j]<<" in stock, Total value: $"<<price_per_quantity[j]<<endl;
    }
}