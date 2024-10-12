#include<iostream>
using namespace std;
main()
{
string name;
int wins, draws, losses, points;
cout<<"Enter the name of the cricket team: ";
cin>>name;
cout<<"Enter the number of wins: ";
cin>>wins;
cout<<"Enter the number of draws: ";
cin>>draws;
cout<<"Enter the number of losses: ";
cin>>losses;
int w, d, l;
w=wins*3;
d=draws*1;
l=losses*0;
points=w+d+l;
cout<< name <<" has obtained " << points <<" points in the Asia Cup tournament";
}