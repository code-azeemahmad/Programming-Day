#include<iostream>
using namespace std;
void displayNumbers(int amplify);
main()
{
    int amplify;
    cout << "Enter the number to Amplify: ";
    cin >> amplify;
    displayNumbers(amplify);
}
// function that display numbers after every 3 numbers in order 4 number will be multiple of 4
void displayNumbers(int amplify)
{
    int sequence=1, divisibleNumber=40;
    for (int i = 1; i <= amplify; i++)
    {
        
        if(sequence%4!=0)// executed when i become multiple of 4 and print desired multiple of 4
        {
            cout << sequence << ",";
        }
        sequence=sequence+1;
        if(sequence%4==0)
        {
            
            cout << divisibleNumber << ",";
            divisibleNumber=divisibleNumber+40;
        }
    }
    
}