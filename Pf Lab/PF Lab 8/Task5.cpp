#include<iostream>
using namespace std;
int main(){
    int x,bal,rem_bal,wthdrw,dep;
    bal=12000;
    cout<<"1: Deposit "<<endl;
    cout<<"2: Withdraw "<<endl;
    cout<<"3: Check Balance "<<endl;
    cout<<"4: Exit "<<endl;
    cin>>x;

    switch(x){
        case 1:
            cout<<"Enter Your Deposit Amount = ";
            cin>>dep;
        break; 
        case 2:
            cout<<"Enter Withdraw amount = ";
            cin>>wthdrw;
            rem_bal=wthdrw-bal;
            if(bal<wthdrw)
            cout<<"You dont have enough money ";
            else
            cout<<"You Amount is = "<<rem_bal;
        break;
        case 3:
        cout<<"Your Balance is = "<<rem_bal<<endl;
        break;
        default:
            cout<<"You Entered wrong Number";
    }
    return 0;

}