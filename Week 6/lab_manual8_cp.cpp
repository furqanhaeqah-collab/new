#include<iostream>
using namespace std;
main(){
    int size1,size2;
    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>>size1;
    int arr1[size1];
    cout<<"Enter "<<size1<<" elements fro the first array, one per line: "<<endl;
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the number of elements for the second array, one per line: ";
    cin>>size2;
    int arr2[size2];
    cout<<"Enter "<<size2<<" elements for the second array, one per line: "<<endl;
    for(int j=0;j<size2;j++){
        cin>>arr2[j];
    }
    cout<<"Resulting array: ";
    for(int k=0;k<size1;k++){
        cout<<arr1[k]<<",";
        if(k==1){
            break;
        }
        for(int l=0;l<size2;l++){
            cout<<arr2[l]<<",";
        }
        
    }
}