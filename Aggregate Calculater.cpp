#include <iostream>
using namespace std;
main(){
string name;
float matric;
float inter;
float ecat;
float aggr;
float matric_,inter_,ecat_;
matric_ =1100;
inter_ = 550;
ecat_ =400;
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter matriculation marks (out of 1100): ";
cin>>matric;
cout<<"Enter Intermediate marks (out of 550): ";
cin>>inter;
cout<<"Enter ECAT Marks (out of 400): ";
cin>>ecat;
aggr = (((matric/matric_)*0.10)+((inter/inter_)*0.40)+((ecat/ecat_)*0.50))*100;
cout<<"Aggregate score for "<<name<<" is "<<aggr;
}