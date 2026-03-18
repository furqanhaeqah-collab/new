#include<iostream>
using namespace std;
main(){
    int pin[3]={1234};
    bool login=false;
    for(int i=1;i<=3;i++){
        cout<<"Enter pin: ";
        cin>>pin[i];
        if(pin[i]==1234){
            cout<<"Login Successful"<<endl;
            login=true;
            break;
        }
        else if(pin[i]!=1234){
            cout<<"Try again"<<endl;
        }
    }
    int currentbalance=100000;
    int deposit_money;
    int withdraw_money;
    int choice;
    if(login==true){
        while(true){
        cout<<"------MAIN MENU------"<<endl;
        cout<<"1--->Check Balance"<<endl;
        cout<<"2--->Deposit Money"<<endl;
        cout<<"3--->Withdraw Money"<<endl;
        cout<<"4--->Exit"<<endl;
        cout<<"Enter your choice(1-4): ";
        cin>>choice;
            if(choice==1){
                cout<<"Current balance: "<<currentbalance<<endl;
            }
            if(choice==2){
                cout<<"Enter the amount to deposit: ";
                cin>>deposit_money;
                currentbalance=currentbalance+deposit_money;
                cout<<"Current Balance: "<<currentbalance<<endl;
            }
            if(choice==3){
                cout<<"Enter the amount to withdraw: ";
                cin>>withdraw_money;
                if(withdraw_money<=currentbalance){
                    currentbalance=currentbalance-withdraw_money;
                    cout<<"Current Balance: "<<currentbalance<<endl;
                }
                else{
                    cout<<"Insufficient Balance"<<endl;
                }
            }
            if(choice==4){
                cout<<"Exiting the program"<<endl;
                break;
            }
            if(choice>=5){
                cout<<"Invalid Choice"<<endl;
            }
        }
    }
}