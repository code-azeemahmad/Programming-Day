#include<iostream>
using namespace std;
void printTable(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    printTable(number);
}
// function that print table of a given number
void printTable(int number)
{
    for(int i=1; i<=10; i++)
    {
        cout << number << " * " << i << " = " << number*i << endl;
    }
}