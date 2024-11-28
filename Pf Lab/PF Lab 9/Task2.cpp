#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter Value of A = ";
    cin>>a;
    cout<<"Enter Value of B = ";
    cin>>b;
    cout<<"enter any operator = ";
    cin>>op;
    switch(op){
        case'+':
            cout<<"Sum of A and B is = "<<a+b;
        break;
        case'-':
            cout<<"Difference of A and B is = "<<a-b;
        break;
        case'*':
            cout<<"Product of A and B is = "<<a*b;
        break;
        case'/':
            cout<<"Division of A and B is = "<<a/b;
        break;
        default:
            cout<<"You Entered Wrong Number";
    }
    return 0;
}