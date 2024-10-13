#include<iostream>
using namespace std;
float lowestprice(float n, string period);
int main()
{
    float n;
    string period;
    cout<<"Enter the number of kilometers: ";
    cin>>n;
    cout<<"Enter the period of the day: ";
    cin>>period;
    float answer;
    answer=lowestprice(n,period);
    cout<<"The lowest price for " << n << " kilometers: " << answer <<" EUR" ;


}
float lowestprice(float n, string period)
{
    float result;
    if (n<20 && period=="day")
    {
        result=n*0.79;
    }
    else if (n<20 && period=="night")
    {
        result=n*0.9;
    }
    else if (n>=20 && n<100 )
    {
        result=n*0.09;
    }
    else if (n>=100)
    {
        result=n*0.06;
    }
    
    return result;

}