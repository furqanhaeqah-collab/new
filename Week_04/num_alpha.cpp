#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int ones,tens;
    ones = n%10;
    tens = n/10; 
    if(n==1){
        cout<<"one";
    }
    if(n==2){
        cout<<"two";
    }
    if(n==3){
        cout<<"three";
    }
    if(n==4){
        cout<<"four";
    }
    if(n==5){
        cout<<"five";
    }
    if(n==6){
        cout<<"six";
    }
    if(n==7){
        cout<<"seven";
    }
    if(n==8){
        cout<<"eigth";
    }
    if(n==9){
        cout<<"nine";
    }
    if(n==10){
        cout<<"ten";
    }
    if(n==11){
        cout<<" eleven";
    }
    if(n==12){
        cout<<" twelve";
    }
    if(n==13){
        cout<<" thirteen";
    }
    if(n==14){
        cout<<" fourteen";
    }
    if(n==15){
        cout<<" fifteen";
    }
    if(n==16){
        cout<<" sixteen";
    }
    if(n==17){
        cout<<" seventeen";
    }
    if(n==18){
        cout<<" eighteen";
    }
    if(n==19){
        cout<<" nineteen";
    }
    if(n==100){
        cout<<"hundred";
    }
    if(n>= 20 && n<=99 ){
        if(tens==2){
            cout<<"twenty";
        }
        if(tens==3){
            cout<<"thirty";
        }
        if(tens==4){
            cout<<"fourty";
        }
        if(tens==5){
            cout<<"fifty";
        }
        if(tens==6){
            cout<<"sixty";
        }
        if(tens==7){
            cout<<"seventy";
        }
        if(tens==8){
            cout<<"eighty";
        }
        if(tens==9){
            cout<<"ninty";
        }
        if(ones==1){
            cout<<" one";
        }
        if(ones==2){
            cout<<" two";
        }
        if(ones==3){
            cout<<" three ";
        }
        if(ones==4){
            cout<<" four";
        }
        if(ones==5){
            cout<<" five";
        }
        if(ones==6){
            cout<<" six";
        }
        if(ones==7){
            cout<<" seven";
        }
        if(ones==8){
            cout<<" eight";
        }
        if(ones==9){
            cout<<" nine";
        }
    }   
}