#include<iostream>
using namespace std;
int main()
{
    int i=1, X;
    cout<<"Enter a Number";
    cin>>X;
    while(i<=10)
    {
        cout<<X<<" x "<<i<<"="<<X*i<<endl;
        i++;
    }
    return 0;
}