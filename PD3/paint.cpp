#include<iostream>
using namespace std;
main()
{
cout<<"Number of square meters you can paint = ";
int wall;
cin>>wall;
cout<<"Height of wall(in meters) = ";
int height;
cin>>height;
cout<<"Width of wall(in meters) = ";
int width;
cin>>width;                          //PAINT WALLS
int area;
area=height*width;
cout<<"Area of a single wall(in square meters) = " <<area << endl;
int paint;
paint=wall/area;
cout<<"Number of walls you can paint = " <<paint ;


}