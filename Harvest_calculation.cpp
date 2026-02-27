#include <iostream>
using namespace std;
main(){
float N,M;
int v_kg,f_kg;
float tp_coins,tp_rs;
cout<<"Enter Vegetable price per kilogram: ";
cin>>N;
cout<<"Enter Fruit price per kilogram: ";
cin>>M;
cout<<"Enter Total Kilograms of Vegetables sold: ";
cin>>v_kg;
cout<<"Enter Total Kilograms of Fruits sold: ";
cin>>f_kg;
tp_coins = (N*v_kg)+(M*f_kg);
tp_rs = tp_coins/1.94;
cout<<"Total earning of Harvest in coins = "<<tp_coins<<endl;
cout<<"Total earning of Harvest in rupees = "<<tp_rs;
}