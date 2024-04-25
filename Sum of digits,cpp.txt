#includ<iostream>
using namespace std;
int main()
{
int num,temp,digit,sum=0;
cout<<"Input a number \t";
cin>>num;
temp=num;
while(num>0)
{
digit=num%10;
sum=sum+digit;
num=num/10;
}
cout<<"Sum of digits of"<<temp<<"="<<sum;
return0;
}