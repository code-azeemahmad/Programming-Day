#include<iostream>
#include<cmath>
float power(float base, float exponent);
using namespace std;
int main()
{
    float base,exponent,result;
    cout<<"Enter the base number: ";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>exponent;
    result=power(base,exponent);
    cout<<base <<" raised to the power " <<exponent <<" is: " << result;



}
float power(float base, float exponent)
{
    float expo=pow(base,exponent);
    return expo;
}