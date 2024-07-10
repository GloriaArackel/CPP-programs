#include<iostream>
using namespace std;
int main()
{
int num,c,digit,rev=0;
cout<<"Enter the number";
cin>>num;
c=num;
while( num!=0)
{
digit=num%10;
rev=(rev*10)+digit;
num=num/10;
}
cout<<"The reverse of the number is"<<rev;
return 0;
}