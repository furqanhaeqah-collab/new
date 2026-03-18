#include<iostream>
using namespace std;
main(){
    int count;
    cout<<"Enter number of elements: ";
    cin>>count;
    int array[count];
    int sum=0;
    cout<<"Enter "<<count<<" numbers: "<<endl;
    for(int i=0;i<count;i++){
        cin>>array[i];
        sum=sum+array[i];
    }
    cout<<"Sum of all elements: "<<sum;
}
