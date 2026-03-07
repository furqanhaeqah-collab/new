#include <iostream>
using namespace std;
main(){
int a,m,average;
cout<<"Enter the person's age: ";
cin>>a;
cout<<"Enter the number of times they've moved: ";
cin>>m;
average = a/(m+1);
cout<<"Average number of years lived in the same house: "<<average;
}