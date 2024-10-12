#include<bits/stdc++.h>
using namespace std;
float getdiscount(float purchase,float discount);
int main()
{
    float purchase;
    cout<<"Enter the purchase amount: ";
    cin>>purchase;
    float payable=getdiscount(purchase);
    cout<<"The payable amount after discount is: " << payable;
}
float getdiscount(float purchase)
{
    float discount=purchase-(0.1*purchase);
    return discount;

}