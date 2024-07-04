#include<iostream>
using namespace std;
void main()
{
int day;
cout<<"Enter a number between 1 and 7";
cin>>day;
switch(day)
{
case 1:cout<<"Sunday";
break;
case 2:cout<<"Monday";
break;
case 1:cout<<"Tuesday";
break;
case 1:cout<<"Wednesday";
break;
case 1:cout<<"Thursday";
break;
case 1:cout<<"Saturday";
break;
default:cout<<"Invalid input";
}
return 0;
}