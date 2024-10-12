#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    if ((num/2)*2==num)                        /*This is because we are using int datatype.
                                                 For odd numbers, when num is divided by and
                                                 then multiplied by 2, int data type ignores
                                                 the digits after decimal point and it doesn't
                                                 satisfy the if conditon because the number 
                                                 comes is one time less than the original number.
                                                 For even number, the if condition is satisfied.*/
    {
        cout<<"Number " << num <<" is Even";
    }
    else
    {
        cout<<"Number " << num <<" is Odd";
    }
    return 0;

}
