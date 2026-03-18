#include<iostream>
using namespace std;
main(){
    int count;
    cout<<"Enter number of flights: ";
    cin>>count;
    cout<<endl;
    int flight_no[count];
    string flight_destination[count];
    int flight_seat[count];
    for(int i=0;i<count;i++){
        cout<<"Enter flight number for flight "<<i+1<<": ";
        cin>>flight_no[i];
        cout<<"Enter destination for flight "<<flight_no[i]<<": ";
        cin>>flight_destination[i];
        cout<<"Enter seats available for flight "<<flight_no[i]<<": ";
        cin>>flight_seat[i];
        cout<<endl;
    }
    cout<<"Flight Information: "<<endl;
    cout<<"--------------------"<<endl;
    for(int j=0;j<count;j++){
        cout<<"Flight "<<flight_no[j]<<" to "<<flight_destination[j]<<" has "<<flight_seat[j]<<" seats available."<<endl;
    }
    cout<<endl;
    cout<<"Flights with less than 5 seats available: "<<endl;
    cout<<"------------------------------------------"<<endl;
    for(int k=0;k<count;k++){
        if(flight_seat[k]<5){
            cout<<"Flight "<<flight_no[k]<<" to "<<flight_destination[k]<<" has only "<<flight_seat[k]<<" seats left!"<<endl;
        }
    }
}