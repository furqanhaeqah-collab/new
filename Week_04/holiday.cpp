#include<iostream>
using namespace std;
main(){
    int no_holidays,resultm,resultd,working_days,time_for_game,diff;
    cout<<"Holidays: ";
    cin>>no_holidays;
    working_days = 365 - no_holidays;
    time_for_game = (working_days*63)+(no_holidays*127);
    if(time_for_game<30000){
        diff = 30000 - time_for_game;
        resultm = diff/60;
        resultd = diff%60;
        cout<<"Tom sleeps well"<<endl<<resultm<<" hours and "<<resultd<<" minutes less for play";
    }
    if(time_for_game>30000){
        diff = time_for_game - 30000;
        resultm = (diff/60);
        resultd = (diff%60);
        cout<<"Tom will run away"<<endl<<resultm<<" hours and "<<resultd<<" minutes for play";
    }
}