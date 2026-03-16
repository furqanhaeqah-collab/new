#include <iostream>
using namespace std;
main(){
int polygon,interior_angle;
cout<<"Enter number of sides of polygon: ";
cin>>polygon;
interior_angle =(polygon-2)*180;
cout<<"The total sum of interior angles of a : "<<polygon<<"-sided polygon is : "<<interior_angle<<" degrees";
}