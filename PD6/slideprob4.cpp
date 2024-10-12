#include<iostream>
using namespace std;
float getdiscount(float purchase,string day);
int main()
{
    float purchase;
    string day;
    string month;
    cout<<"Enter the purchase amount: ";
    cin>>purchase;
    cout<<"Enter the day: ";
    cin>>day;
    cout<<"Enter the month: ";
    cin>>month;
    float payable=getdiscount(purchase,day);
    cout<<"The payable amount after discount is: " << payable;
}
float getdiscount(float purchase,string day)
{
    float discount;
    if (day=="Sunday")
    {
        discount=purchase-(0.1*purchase);
    }
    if (day=="Tuesday")        //else{}
    {
        discount=purchase-(0.05*purchase);
    }
    if (day=="Monday")
    {
        discount=purchase-(0.08*purchase);  
    }

    return discount;

}