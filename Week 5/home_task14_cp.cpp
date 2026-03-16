#include<iostream>
using namespace std;
main(){
    int rows,col;
    for(rows=1;rows<=5;rows++){
        for(col=1;col<=rows;col++){
            cout<<"* ";
        }
        cout<<endl; 
    }
}