#include <iostream>
using namespace std;
main(){
float V,I,P;
cout<<"Enter Voltage (in volts): ";
cin>>V;
cout<<"Enter Current (in Amperes): ";
cin>>I;
P = V*I;
cout<<"The power is "<<P<<" watts";
}