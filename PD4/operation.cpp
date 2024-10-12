#include<iostream>
using namespace std;
#include<cmath>
int addition(int number1,int number2);
int subtraction(int number1,int number2);
int multiply(int number1,int number2);
int division(int number1,int number2);
int main()
{
    int num1, num2;
    int a, s, m, d;
    char op;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter an operator ( + , - , * , / ): ";
    cin>>op;
    if (op=='+')
    {
        a=addition(num1,num2);
        cout<<"Addition: " << a;
    }
    if (op=='-')
    {
        s=subtraction(num1,num2);
        cout<<"Subtraction: " << s;
    }
    if (op=='*')
    {
        m=multiply(num1,num2);
        cout<<"Multiplication: " << m;
    }
    if (op=='/')
    {
        d=division(num1,num2);
        cout<<"Division: ";
    }
    return 0;
}
int addition(int number1,int number2)
{
    int sum=number1+number2;
    return sum;
}
int multiply(int number1,int number2)
{
    int mul=number1*number2;
    return mul;
}
int subtraction(int number1,int number2)
{
    int sub=abs(number1-number2);
    return sub;
}
int division(int number1,int number2)
{
    int div=number1/number2;
    return div;
}