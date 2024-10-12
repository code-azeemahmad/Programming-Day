#include<iostream>
using namespace std;
main()
{
cout<<"Number of Minutes:  ";
int min;
cin>>min;
cout<<"Frames Per Second:  ";
int frame;
cin>>frame;
int mul;
mul=min*60;
cout<<"No. of Seconds in " <<min ;
cout<<" Minutes:  " <<mul <<endl;
int total;
total=mul*frame;
cout<<"Total Number of Frames in " <<min;
cout<<" Minutes:  " <<total;
}