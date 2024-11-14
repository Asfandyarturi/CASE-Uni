#include<iostream>
using namespace std;
int main()
{
int x, i;
int sum=0;
cout<< "enter a posittive intteger";
cin>>x;
if(x>0)
{
while(i<=x)
{
    sum=sum +i;
    i++;
}
cout<<sum;
}
return 0;
}