#include <iostream>
using namespace std;
main(){
int population,n,decades;
cout<<"Enter the current world population: ";
cin>>population;
cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>n;
decades = population + (n*360);
cout<<"Population in three decades will be: "<<decades;
} 