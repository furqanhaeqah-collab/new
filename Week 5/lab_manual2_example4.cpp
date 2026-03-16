#include<iostream>
using namespace std;
main(){
    //By using while loop
    //Adding first five natural numbers
    int i=1;
    int sum=0;
    while(i<=5){
        sum=sum+i;
        i++;
    }
    cout<<sum;
}