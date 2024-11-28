#include<iostream>
using namespace std;
int main(){

    char x;
    cout<<"Enter Alphabet = ";
    cin>>x;

    switch(x){
        case'A':
            cout<<"You choose A "<<endl;
        break;
        case'B':
            cout<<"You choose B "<<endl;
        break;
        case'C':
            cout<<"You choose C "<<endl;
        break;
        case'D':
            cout<<"You choose D "<<endl;
        default:
            cout<<"You choose Wrong Character ";
    }
    return 0;
}