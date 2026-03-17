#include<iostream>
using namespace std;
main(){
    int rows,i,j;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=rows;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}