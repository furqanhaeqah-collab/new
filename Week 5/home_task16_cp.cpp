#include<iostream>
using namespace std;
main(){
    int rows,col;
    for(rows=5;rows>=1;rows--){
        for(col=5;col>=rows;col--){
            cout<<col;
        }
        cout<<endl; 
    }
}