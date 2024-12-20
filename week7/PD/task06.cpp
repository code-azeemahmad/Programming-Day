#include<iostream>
using namespace std;
int checkPrimorial(int number);
bool isPrime=true;
int j, k=2, n=3, i=1;
main()
{
    int number, primeNumber, product=1;
    cout << "Enter Number: ";
    cin >> number;
    for(int i=1; i<=number-1; i++)
    {
        primeNumber=checkPrimorial(number);
        product=primeNumber*product;
    }
    product=product*2;
    cout << product;
}
//function that get prime numbers based on how many need 
int checkPrimorial(int number)
{
    
    bool isPrime=true;
    for(i=n; i<=n; i++)// check each number
    {
        for(j=2; j<i;j++)// check number in store in i from 2 if it is prime then return i
        {
            if(i%j==0)
            {
                isPrime=false;
            }
        }
        n++;
        if(isPrime==true)
        {
            return i;
        }
        isPrime=true;
    }
    
}