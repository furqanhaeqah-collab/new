#include <iostream>
using namespace std;
main(){
    int age=18,money,y_last;
    cout<<"Enter the money of inheritance(1-1000000): ";
    cin>>money;
    cout<<"Enter number of years he need to survive(1801-1900): ";
    cin>>y_last;
    for(int y=1800;y<=y_last;y++){
        if(y%2==0){
            money=money-12000;
        } 
        else{
            money=money-(12000+50*age);
        }
        age++;
    }
    if(money>=0){
        cout<<"Yes!He will live a carefree life and will have "<<money<<" dollars left";
    } 
    else{
        cout<<"He will need "<<-money<<" dollars to survive";
    }
}