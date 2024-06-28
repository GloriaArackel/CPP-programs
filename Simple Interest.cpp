#include<iostream>
using namespace std;
int main()
{
char ch;
int P,N,I;
cout<<"Enter the principle amount";
cin>>P;
cout<<"Enter the no.of years";
cin>>N;
cout<<"Enter C for current account and S for savins account";
cin>>ch;
if(ch=='c')
{
T=P*N*8.5/100;
cout<<"Interest="<<I;
}
else if(ch=='S')
{
I=P*N*6.5/100;
cout<<"Interest="<<I;
}
else
cout<<"Invalid input";
return0;
}