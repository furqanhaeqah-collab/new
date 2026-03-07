#include<iostream>
using namespace std;
main(){
    int dress_price;
    cout<<"Enter dress price:";
    cin>>dress_price;
    if(dress_price < 1500){
        cout<<"You will buy the dress";
    }
    if(dress_price > 1500){
        cout<<"You will not buy the dress";
    }
}