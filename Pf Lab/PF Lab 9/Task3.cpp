#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter Alphabet = ";
    cin>>x;
    switch(x){
        case'A':
        case'a':
            cout<<"You entered Vowel "<<endl;
        break;
        case'E':
        case'e':
            cout<<"You entered vowel "<<endl;
        break;
        case'I':
        case'i':
            cout<<"You Entered vowel "<<endl;
        break;
        case'O':
        case'o':
            cout<<"You Entered Vowel "<<endl;
        break;
        case'U':
        case'u':
            cout<<"You Entered Vowel "<<endl;
        default:
            cout<<"You Entered Wrong Alphabet ";
    }
    return 0;
}