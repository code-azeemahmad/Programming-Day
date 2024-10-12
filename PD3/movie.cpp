#include<iostream>
using namespace std;
main()
{
string name;
int adult, child, at, ct, ch;
cout<<"Enter the movie name =  ";
cin>>name;
cout<<"Enter the adult ticket price = $";
cin>>adult;
cout<<"Enter the child ticket price = $";
cin>>child;
cout<<"Enter the number of adult tickets sold = ";
cin>>at;
cout<<"Enter the number of child ticket sold = ";
cin>>ct;
cout<<"Enter the percentage of the amount to be donated to charity = ";
cin>>ch;
int childsales;
childsales=child*ct;
int adultsales;
adultsales=adult*at;
int totalamount;
totalamount=childsales+adultsales;
cout<<"Enter the movie name =  ";
cin>>name;
cout<<"Total amount generated from ticket sales = $" << totalamount << endl;
int chari;
chari=totalamount/10;
cout<<"Donation to charity(10%) = $" << chari << endl;
int remain;
remain=totalamount-chari;
cout<<"Remaining amount after donation = $" << remain;

}