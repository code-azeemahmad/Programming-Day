#include<bits/stdc++.h>
using namespace std;
float getdiscount(float purchase,string day,string month);
int main()
{
    float purchase;
    string day, month;
    cout<<"Enter the purchase amount: ";
    cin>>purchase;
    cout<<"Enter the month: ";
    cin>>month;
    cout<<"Enter the day: ";
    cin>>day;
    
    float payable=getdiscount(purchase,day,month);
    cout<<"The payable amount after discount is: " << payable;
}
float getdiscount(float purchase,string day, string month)
{
    float discount=purchase;
    if (month=="October")
    {
        if (day=="Sunday")
        {discount=purchase-(0.1*purchase);}
    }
    return discount;

}