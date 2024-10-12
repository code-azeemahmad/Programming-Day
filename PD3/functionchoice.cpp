#include<iostream>
#include<windows.h>
using namespace std;
void mul(int num1,int num2);
void add(int num1,int num2);
main()
{
	while(true)
	{
	system("cls");
	Sleep(2000);
	cout<<"Enter the first number = ";
	int num1;
	cin>> num1;
	cout<<"Enter the second number = ";
	int num2;
	cin>> num2;

	cout<<"Enter '+' to add the numbers or '*' to multiply the numbers = ";
	char op;
	cin>>op;
		if (op == '+')
			{
			add(num1,num2);
			}
		if (op == '*')
			{
			mul(num1,num2);
			}
			}
	
}
void add(int num1,int num2)
{
int sum;
sum=num1+num2;
cout<<"The Sum is = " << sum << endl;
}
void mul(int num1,int num2)
{
int mul;
mul=num1*num2;
cout<<"The Product is = " << mul <<endl;
}