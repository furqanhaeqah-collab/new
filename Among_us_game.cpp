#include <iostream>
using namespace std;
main(){
float i,p,am;
cout<<"Enter Imposter Count: ";
cin>>i;
cout<<"Enter Player Count: ";
cin>>p;
am = 100*(i/p);
cout<<"Chance of being an imposter: "<<am<<"%";
}