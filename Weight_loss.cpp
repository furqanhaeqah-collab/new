#include <iostream>
using namespace std;
main(){
float target;
float days;
string name;
cout<<"Enter the Name of the Person: ";
cin>>name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>target;
days = target*15;
cout<<name<<" will need "<<days<<" days to lose "<<target<<" kg of weight by following the doctor's suggestions";
}
