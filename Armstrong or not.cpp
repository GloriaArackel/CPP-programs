#include<iostream>
using namespace std;
int main()
{
int n,i=1,r,cb=0;
cout<<"Enter a number";
cin>>n;
i=n;
while(n)
{
r=n%10;
cb=cb+r*r*r;
n=n/10;
}
if(cb==i)
{
cout<<"The given number is Armstrong ";
}
else
{
cout<<"The given number is not Armstrong";
}
return 0;
}