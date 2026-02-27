#include <iostream>
using namespace std;
main(){
int w,d,l,points;
cout<<"Enter the number of wins: ";
cin>>w;
cout<<"Enter the number of draws: ";
cin>>d;
cout<<"Enter the number of losses: ";
cin>>l;
points = ((w*3) + (d*1) + (l*0));
cout<<"Pakistan has obtained "<<points<<" in Asia Cup Tournament";
}