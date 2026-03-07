#include<iostream>
using namespace std;
main(){
    int temp1,temp2,diff;
    cout<<"Temperature City 1: ";
    cin>>temp1;
    cout<<"Temperature City 2: ";
    cin>>temp2;
    diff = temp1-temp2;
    if(diff>10){
        cout<<"Difference is too Big"<<endl;
    }
    cout<<"Program Ends";
}