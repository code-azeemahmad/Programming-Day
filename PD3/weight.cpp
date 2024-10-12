#include<iostream>
using namespace std;
main()
{
cout<<"Enter weight = ";
int weight;
cin>> weight;
cout<<"Enter gravity = ";
int gravity;
cin>> gravity;
int mass;
mass=weight/gravity;
cout<<"the mass is = " << mass;
}