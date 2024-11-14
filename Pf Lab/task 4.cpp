#include<iostream>
using namespace std;
int main()
{
    int i=1, x , y;
    cout<<"enter the number of digit : ";
    cin>>x;
    int arr[x];
for(i=1;i<=x;i++)
{
    cout<<"enter digits = ";
    cin>>arr[x];
}
cout<< "the reverse digits are ";
while(y>0)
{
    cout<<arr[x-1];
    y--;
}
return 0;
}