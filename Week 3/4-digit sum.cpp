#include <iostream>
using namespace std;
main(){
int n,s,n1,n2,n3,n4;
cout<<"Enter a 4-digit number: ";
cin>>n;
n1 = n/1000;
n2 = (n%1000)/100;
n3 = (n%100)/10;
n4 = n%10;
s = n1+n2+n3+n4;
cout<<"Sum of the indivual digits = "<<s;
}
