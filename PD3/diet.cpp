#include<iostream>
using namespace std;
main()
{
cout<<"Enter the Name of the Person: ";
string name;
cin>> name;
cout<<"Enter the Target Weight in Kilograms: ";
int target;
cin>> target;
cout<<"Number of Days to lose 1kg of Weight: ";
int lose;
cin>>lose;
int days;
days=target*lose;     //WEIGHT LOSS CALCULATION
cout<< name;
cout<<" will need " <<days;
cout<<" days to lose " <<target;
cout<<" kg of weight by following doctor's suggestions";

}