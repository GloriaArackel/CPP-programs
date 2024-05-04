#include<iostream>
using namespace std;
int main()
{
int num,sum=0,i;
cout<<"Enter the limit";
cin>>num;
for(i=1;i<=num;i++)
sum=sum+i*i;
cout<<"The sum of squares of natural numbers upto"<<num<<"is"<<sum;
return0;
}