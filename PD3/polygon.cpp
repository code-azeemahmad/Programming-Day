#include<iostream>
using namespace std;
main()
{
cout<<"Enter the No. of sides of Polygon = ";
int sides;
cin>>sides;
int sum;
sum=(sides-2)*180;
cout<<"The Sum of Internal Angles of " <<sides;
cout<<" Sided Polygon is = " <<sum;
cout<<" degrees";
}