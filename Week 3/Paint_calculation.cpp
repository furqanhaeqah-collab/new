#include <iostream>
using namespace std;
main(){
int n,w,h,t;
cout<<"Enter paint area: ";
cin>>n;
cout<<"Enter width: ";
cin>>w;
cout<<"Enter height: ";
cin>>h;
t = n/(w*h);
cout<<"Walls painted = "<<t;
}