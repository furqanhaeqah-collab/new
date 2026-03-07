#include<iostream>
using namespace std;
main(){
    int salary=10000,laptop=50000,months;
    float advance=0.5;
    float calculation = salary*advance;
    if(calculation*6==laptop){
        cout<<"Laptop can be bought after 6 months";
    }
    else{
    months = 50000/calculation;
    cout<<"Months required to buy laptop: "<<months;    
    }
}