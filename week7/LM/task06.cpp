#include<iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);
main()
{
    int number1, number2, gcd, lcm;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    gcd=calculateGCD(number1, number2);
    lcm=calculateLCM(number1, number2, gcd);
    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm;
}
// function that calculate gcd
int calculateGCD(int number1, int number2)
{
    int product=1;
    for(int i=2; number1!=1 || number2!=1; i++)
    {
        while(number1%i==0 || number2%i==0)
        {
            if(number1%i==0 && number2%i==0)
            {
                product=i*product;
            }
            if(number1%i==0)// it executed when number1 divided by i
            {
                number1=number1/i;
            }
            if(number2%i==0)// it executed when number2 divided by i
            {
                number2=number2/i;
            }
        }
    }
    return product;
}
// function that calculate lcm
int calculateLCM(int number1, int number2, int gcd)
{
    int lcm=(number1*number2)/gcd;// formula
    return lcm;
}    