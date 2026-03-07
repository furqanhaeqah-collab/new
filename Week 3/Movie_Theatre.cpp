#include <iostream>
using namespace std;
main(){
float price_adult,price_child,num_adult,num_child,percentage_donation,t_money,donation,after_charity_money;
string name;
cout<<"Enter the movie name: ";
cin>>name;
cout<<"Enter the adult ticket price: $";
cin>>price_adult;
cout<<"Enter the child ticket price: $";
cin>>price_child;
cout<<"Enter the number of adult ticket sold: ";
cin>>num_adult;
cout<<"Enter the number of child ticket sold: ";
cin>>num_child;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>percentage_donation;
cout<<"--------------------------------------"<<endl<<endl;
cout<<"Movie: "<<name;
t_money = (price_adult*num_adult)+(price_child*num_child);
donation = (t_money*percentage_donation)/100;
after_charity_money = t_money - donation;
cout<<"Total amount generated from ticket sales: $"<<t_money<<endl;
cout<<"Donation to charity ("<<percentage_donation<<"): $"<<donation<<endl;
cout<<"Remaining amount after donation: $"<<after_charity_money<<endl;
}