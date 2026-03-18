#include<iostream>
using namespace std;
main(){
    int count;
    cout<<"Enter number of elements: ";
    cin>>count;
    int array[count];
    int even_count=0;
    cout<<"Enter "<<count<<" number of elements: "<<endl;
    for(int i=0;i<count;i++){
        cin>>array[i];
        if(array[i]%2==0){
            even_count++;
        }
    }
    cout<<"Total Even Numbers: "<<even_count;
}