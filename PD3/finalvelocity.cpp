#include<iostream>
using namespace std;
main()
{
cout<<"Enter Initial Velocity(m/s):  ";
int initial;
cin>>initial;
cout<<"Enter Acceleration(m/s^2):  ";
int acceleration;
cin>>acceleration;
cout<<"Enter Time(s):  ";
int time;
cin>>time;
int final;
final=(time*acceleration)+initial;
cout<<"Final Velocity(m/s):  " << final;
}