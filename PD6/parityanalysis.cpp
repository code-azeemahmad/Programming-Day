#include<iostream>
#include<cmath>
using namespace std;
int parity(int number);
int main()
{
    int number, result;
    cout<<"Enter a three-digit number: ";
    cin>>number;
    result=parity(number);
    cout<<result;
}
int parity(int number)
{
    int num1,num2,num3,num_1,sum;
    num1=number/100;
    num_1=number%100;
    num2=num_1/10;
    num3=num_1%10;
    sum=num1+num2+num3;
    if ((number%2==0 && sum%2==0) || (number%2!=0 && sum%2!=0))
    {
        return 1;   //both number and sum are even or odd
    }

    else
    {
        return 0;  //either number is odd or sum is even 
    }

}
