#include<iostream>
using namespace std;
main()
{
float charge, time;
float current;
cout<<"Enter the Charge(Q) in Coulombs = ";
cin>>charge;
cout<<"Enter the Time(t) in Seconds = ";
cin>>time;
current=charge/time;
cout<<"The Current(I) is = " << current <<" Amperes ";
}