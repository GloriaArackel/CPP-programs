#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int type;
float area;
cout<<"Enter the type(1-rectangle,2-circle,3-triangle);
cin>>type;
switch(type)
{
case1:int l,b;
cout<<"Enter the lengths of the side";
cin>>l>>b;
area=l*b;
cout<<"Area of rectangle="<<area;
break;
case2:float r;
cout<<"Enter the radius";
cin>>r;
area=3.14*pow(r,2);
cout<<"Area of circle="<<area;
break;
case3:float b,h;
cout<<"Enter the base and height";
cin>>b>>h;
area=1/2*b*h;
cout<<"Area of the triangle="<<area;
break;
default:cout<<"Invalid type";
return0;
}