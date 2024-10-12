#include<iostream>
using namespace std;
main()
{
cout<<"Enter the Size of the Bag in Pound = ";
int size;
cin>> size;
cout<<"Enter the Cost of the Bag = $";
int cost;
cin>> cost;
cout<<"Enter the Area in Square Feet that can be covered by bag = ";
int area;
cin>> area;
int costperpound;
costperpound=cost/size;
cout<<"Cost of Fertilizer per pound is = $" <<costperpound <<endl;
int feet;
feet=cost/area;
cout<<"Cost of Fertilizing per square foot = $" <<feet;

}