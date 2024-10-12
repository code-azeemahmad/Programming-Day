#include<iostream>
using namespace std;
main()
{
string name;
float matric, inter, ecat;
float mt=1100, it=550, et=400;
cout<<"Enter the Student's Name = ";
cin>>name;
cout<<"Enter matriculation marks (out of 1100) = ";
cin>>matric;
cout<<"Enter intermediate marks (out of 550) = ";
cin>>inter;
cout<<"Enter Ecat marks (out of 400) = ";
cin>>ecat;
float m, i, e;
m=(matric/mt)*10;
i=(inter/it)*40;
e=(ecat/et)*50;
float score;
score=m+i+e;
cout<<"Aggregate Score for " << name << " in UET is = " << score << "%";
}