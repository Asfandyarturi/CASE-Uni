#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Month ";
    cin>>x;

    switch(x){
        case 12:
        case 1:
        case 2:
            cout<<"Winter "<<endl;
        break;
        case 3:
        case 4:
        case 5:
            cout<<"Spring "<<endl;
        break;
        case 6:
        case 7:
        case 8:
        case 9:
            cout<<"Summer "<<endl;
        break;
        case 10:
        case 11:
            cout<<"Autumn "<<endl;
        break;
        default:
            cout<<"You Entered Wrong Number ";
    }
    return 0;
}