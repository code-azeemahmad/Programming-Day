#include<iostream>
using namespace std;
int sum(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum is: " << sum(number);    
}
// function that calculate sum of digits of a number
int sum(int number)
{
    int digit,division=number, sum=0;
    while(number>=1)// the condition is best, because we don't know about the lenght of a number
    {
        digit=number%10;
        number=number/10;
        sum=sum+digit; // it will get digit and add with sum of previous digits
    }
    return sum;
}