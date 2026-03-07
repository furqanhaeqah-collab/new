#include <iostream>
using namespace std;
main(){
float mg,bits;
cout<<"Enter the size in megabytes (MB): ";
cin>>mg;
bits = mg*1024*1024*8;
cout<<mg<<" MB is equivalent to "<<bits;
}