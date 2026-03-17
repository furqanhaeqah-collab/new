#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"Enter the number of elemnts: ";
    cin>>num;
    int rev=num;
    if(num<=0){
        cout<<"Invalid choice";
        return 0;
    }
    int array[num];
    cout<<"Enter "<<num<<" one per line: "<<endl;
    for(int i=1;i<=num;i++){
        cin>>array[i];
    }
    cout<<"Number in reverse order: ";
    for(rev;rev>0;rev--){
        cout<<array[rev];
    }
}