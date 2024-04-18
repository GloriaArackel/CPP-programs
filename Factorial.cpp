#include<iostream>
using namespace std;
double factorial(int n)
{
double fact=1;
int i;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}
int main()
{
int n;
double f;
cout<<"Input a number";
cin>>n;
f=factorial(n);
cout<<"Factorial of"<<n<<"="<<f;
return0;
}
