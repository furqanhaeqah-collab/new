#include<iostream>
using namespace std;
main(){
    float s,l,w,r,b,h,cal;
    string figure;
    cout<<"Geometric Figure: ";
    cin>>figure;
    if(figure=="Square"){
        cout<<"Sides of square: ";
        cin>>s;    
        cal = s*s;
    }
    if(figure=="Rectangle"){
        cout<<"Length: ";
        cin>>l;
        cout<<"Width: ";
        cin>>w;
        cal = l*w;
    }
    if(figure=="Circle"){
        cout<<"Radius: ";
        cin>>r;
        cal = 3.14*r*r;
    }
    if(figure=="Triangle"){
        cout<<"Base: ";
        cin>>b;
        cout<<"Height: ";
        cin>>h;
        cal = (h*b)/2;
    }
    cout<<"Calculated Area: "<<cal;
}