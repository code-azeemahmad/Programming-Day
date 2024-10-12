#include <iostream>
using namespace std;
main()
{
cout<<"Enter the current world population = ";
int current;
cin>>current;
cout<<"Number of Births per Month = " ;
int birth;
cin>>birth;              //WORLD POPULATION IN 3 DECADES
int year;
year=12*birth;
cout<<"Number of Births per year = " <<year <<endl;
int decade;
decade=(year*10);
cout<<"Births in one Decade will be = " <<decade <<endl;
int decade3;
decade3=(3*decade)+current;
cout<<" The Population in Three Decades will be = " <<decade3;
}