#include<iostream>
using namespace std;
main(){
    int pin,select;
    int current_balance=100000;
    int add_money,total_money;
    int withdraw_money,check_blance;
    cout<<"~~~~ATM MANAGEMENT SYSTEM~~~~"<<endl;
    for(int i=1;i<=3;i++){
        cout<<"Enter PIN: ";
        cin>>pin;
        if(pin==1234){
            cout<<"Login Successful"<<endl;
        break;
        }
        else{
            cout<<"Try again"<<endl;
        }
        if(i==3&&(pin!=1234)){
            cout<<"Too many attempts"<<endl<<"Program ended"<<endl;
        }
    }
    for(int j=1;j<=5;j++){
        if(pin==1234){
            cout<<"-----MAIN MENU-----"<<endl;
            cout<<"1--->Check Balance"<<endl;
            cout<<"2--->Deposit money"<<endl;
            cout<<"3--->Withdraw money"<<endl;
            cout<<"4--->Exit"<<endl;
            cout<<"Select any function(1-4): ";
            cin>>select;
            if(select==1){
                cout<<"Current balance is: "<<current_balance<<endl;
            }
            else if(select==2){
                cout<<"Enter the amount of money you want to deposit: ";
                cin>>add_money;
                total_money=current_balance+add_money;
                cout<<"Current balance after deposit: "<<total_money<<endl;
            }
            else if(select==3){
                cout<<"Enter the amount to withdraw: ";
                cin>>withdraw_money;
                if(withdraw_money<=total_money){
                    cout<<"Money withdrawed successfully"<<endl;
                    check_blance=total_money-withdraw_money;
                    cout<<"Your current balance is: "<<check_blance<<endl;
                }
                else if(withdraw_money>total_money){
                    cout<<"Insufficent Balance"<<endl;
                }
            }
            else if(select==4){
                cout<<"Program ended"<<endl;
            break;
            }
            else if(select>4){
                cout<<"Invalid choice"<<endl;
            }
        }

    }
}