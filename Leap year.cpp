#include<iostream>
using namespace std;
void main()
{
int y;
cout<<"Enter the year(in 4-digits):";
cin>>y;
if(y%100==0)
{
if(y%400==0)
cout<"Leap year\n";
}
else 
cout<<"Not a leap year\n";
}
else if(y%4==0)
cout<<"Leap year\n";
else
cout<<"Not a leap year\n";
return 0;
}
