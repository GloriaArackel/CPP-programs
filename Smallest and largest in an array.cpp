#include<iostream>
using namespace std;
int main()
{
int n,num[10],i,largest,smallest;
cout<<"Enter the no.of elements";
cin>>n
cout<<"Enter the elements";
for(i=0;i<n;i++)
{
cin>>num[i];
largest=num[0];
}
for(i=1;i<n;i++)
{
if(num[i]>largest)
largest=num[i];
}
cout<<"The largest number="<<largest;
smallest=num[0];
for(i=1;i<n;i++)
{
if(num[i]<smallest)
smallest=num[i];
}
cout<<"\n The smallest number="<<smallest;
return0;
}