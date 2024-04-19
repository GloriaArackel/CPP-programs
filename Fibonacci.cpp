#include<iostream>
using namespace std;
int main()
{
int f1=0,f2=1,f3,n,i;
cout<<"Fibonacci series \n";
cout<<"Enter the no.of items:\t";
cin>>n;
if(n==1)
cout<<f1;
else
{
cout<<f1<<"\t"<<f2;
for(i=3;i<=n;i++)
{
f3=f1+f2;
cout<<"\t"<<f3;
f1=f2;
f2=f3;
}
return0;
} 