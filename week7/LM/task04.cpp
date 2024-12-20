#include<iostream>
using namespace std;
int frequencyChecker(int number,int digit);
main()
{
    int number, digit ;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    cout << "Frequency: " << frequencyChecker(number, digit);    
}
// function that check how many times digit in a number is repeated
int frequencyChecker(int number,int digit)
{
    int frequency=0, division;
    while(number>=1) // we don't know about the length of given number
    {
        division=number%10;
        number=number/10;
        if(division==digit)// if digit in a number is same as required digit then count++
        {
            frequency=frequency+1;
        }
        
    }
    return frequency;
}