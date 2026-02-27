#include <iostream>
using namespace std;
main(){
int area,width,height,walls;
cout<<"Number of square meters you can paint: ";
cin>>area;
cout<<"Width of the single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meters): ";
cin>>height;
walls = area/(width*height);
cout<<"Nube of walls you can paint: "<<walls;
}