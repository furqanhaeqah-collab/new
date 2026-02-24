#include <iostream>
using namespace std;
main(){
float imp,ply,chance;
cout<<"Enter imposters: ";
cin>>imp;
cout<<"Enter players: ";
cin>>ply;
chance = (imp/ply)*100;
cout<<"Chance = "<<chance<<"%";
}