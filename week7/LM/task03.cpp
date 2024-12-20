#include<iostream>
using namespace std;
int totalDigits(int number);
main()
{
    int number, result;
    cout << "Enter a number: ";
    cin >> number;
    result=totalDigits(number);
    cout << "Total number of digits: " << result;
}
// function that calculate total digits in a number
int totalDigits(int number)
{
    int digit=1;
    while (number>=10)// condition cannot false until number is smaller than 10
    {                 // it helps because we don't know how many digits are in a number. 
        number=number/10;
        digit=digit+1;
    }
    return digit;
}