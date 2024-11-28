#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter R for Red "<<endl;
    cout<<"Enter G for Green "<<endl;
    cout<<"Enter Y for Yellow "<<endl;
    cin>>x;

    switch(x){
        case'R':
        cout<<" Stop "<<endl;
        break;
        case'G':
        cout<<"Go "<<endl;
        break;
        case'Y':
        cout<<"Slow Down "<<endl;
        break;
        default:
            cout<<"You Entered wrong Character "; 
    }
    return 0;
}