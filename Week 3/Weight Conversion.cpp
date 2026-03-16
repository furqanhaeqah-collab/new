#include <iostream>
using namespace std;
main(){
int w_kg;
int w_lbs;
cout<<"~~~Weight Conversion~~~"<<endl;
cout<<"Enter your weight in pounds: ";
cin>>w_lbs;
w_kg = w_lbs*0.45;
cout<<w_lbs<<" pounds is equal to "<<w_kg<<" kg";
}