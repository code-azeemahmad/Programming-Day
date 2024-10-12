#include<iostream>
using namespace std;
int func(int quantity,string product,string city);
int c=400, s=400, w=100;
int main()
{
    string product,city;
    int quantity,result;
    cout<<"Enter the product: ";
    cin>>product;
    cout<<"Enter the city: ";
    cin>>city;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    result=func(quantity,product,city);
    cout<<"The total payable amount: " << result ;

}
int func(int quantity,string product,string city)
{
    int price;
    if (product=="coffee" || product=="sweets")
    {
        price=c*quantity;
    }
    if (product=="water")
    {
        price=w*quantity;
    }
    return price;

}