#include<iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
    int length;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;
    generateFibonacci(length);
}
// function that calculate fibonacci series
void generateFibonacci(int length)
{
    int n1=-1, n2=1;
    int sum=0;
    for(int i=1; i<=length; i++)
    {
        sum=n1+n2;
        cout << sum << " ";
        n1=n2; // fibonacci series = 1,2,3,5,8,13,21...   
        n2=sum;// next term in series become from the sum of last two terms
    }
}