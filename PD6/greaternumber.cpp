#include<iostream>
using namespace std;
int func(int number1, int number2);
int main()
{
    int num1, num2, call; 
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    call=func(num1,num2);
    cout<< call;
}
int func(int number1, int number2)
{
    if (number1>number2)
    {
        return 1;        //int function return int values;
    }
    else{
        return 0;
    }
}