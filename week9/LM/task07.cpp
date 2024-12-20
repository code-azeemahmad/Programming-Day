#include<iostream>
using namespace std;
main()
{
    int number, sum=0;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> number;
    cout << "Enter the resistance values (in ohms) of the " << number << " resistors, one per line: ";
    for(int i=0; i<number; i++)
    {
        int arr[number];
        cin >> arr[i];//store elements in array as entered by user
        sum=arr[i]+sum;//sum resistances as entered by user
    }
    cout << "The total resistance of the series circuit is " << sum << " ohms.";
}