#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter Grade = ";
    cin>>x;

    switch(x){
        case'A':
        case'a':
            cout<<"Excellent Grade "<<endl;
        break;
        case'B':
        case'b':
            cout<<"Good Grade "<<endl;
        case'C':
        case'c':
            cout<<"Normal Grade ";
        break;
        case'D':
        case'd':
            cout<<"Bad Grade ";
        break;
        case'E':
        case'e':
            cout<<"Poor Grade ";
        default:
            cout<<"You Fail ";
    }
    return 0;
}