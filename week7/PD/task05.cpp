#include<iostream>
using namespace std;
main()
{
    int number;
    bool isPrime=true;
    cout << "Enter a number: ";
    cin >> number;// program that tell whether the given number is prime or not
    for(int n=2; n<number; n=n+1)
    {
        if(number%n==0)
        {
            isPrime=false;
        }
    }
    cout << isPrime;
}