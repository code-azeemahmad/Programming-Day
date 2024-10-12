#include<iostream>
using namespace std;
main()
{
cout<<"Enter the Person's Age = ";
int age;
cin>> age;
cout<<"Enter the number of times he has moved = ";
int move;
cin>> move;         //RESIDENCE HISTORY
int house;
house=move+1;
cout<<"Number of houses in which he has lived = " <<house << endl;
int average;
average=age/house;
cout<<"Average number of years lived in the same house = " <<average;
}