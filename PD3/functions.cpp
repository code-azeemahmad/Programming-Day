#include<iostream>
using namespace std;
void add(int num1,int num2);
void mul(int num1,int num2);
main()
{
cout<<"Enter First Number = ";
int num1;
cin>>num1;
cout<<"Enter Second Number = ";
int num2;
cin>>num2;
add(num1,num2);
mul(num1,num2);
}
void add(int num1,int num2)
{
int sum;
sum=num1+num2;
cout<<"The Sum is = " <<sum <<endl;
}
void mul(int num1,int num2)
{
int product;
product=num1*num2;
cout<<"The Product is = " << product;
}