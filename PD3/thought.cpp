#include<iostream>
using namespace std;
int main()
{
int number, sum;
	while(true)
	{
	cout<<"Enter the Number(enter -1 to stop taking input) = ";
	cin>>number;
	if(number==-1)  //use sentinal value to break the loop
	{
	break;      //in built or pre defined command to break the loop
	}
	sum += number;     //equivalent to sum=sum+number;
	}
cout<<"The sum of the numbers is = " << sum;
return 0;
}