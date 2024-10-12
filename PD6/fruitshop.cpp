#include<iostream>
#include<sstream>
#include<string>
using namespace std;
string calculate_fruit_price(string fruit, string day, double quantity);
int main()
{
    string fruit, day;
    double quantity;
    string price;
    cout<<"Enter the Fruit Name: ";
    cin>>fruit;
    cout<<"Enter the day of the Week: ";
    cin>>day;
    cout<<"Enter the Quantity: ";
    cin>>quantity;
    price=calculate_fruit_price(fruit, day, quantity);
    cout << price;
    
}

string calculate_fruit_price(string fruit, string day, double quantity)
{
    double amount;
    stringstream final;
    if (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday" || day=="Saturday")
    {
        if(fruit=="kiwi")
        {
            amount=2.7*quantity;
            final << amount;
        }
        else if(fruit=="banana")
        {
            amount=2.5*quantity;
            final << amount;
        }
        else if(fruit=="apple")
        {
            amount=1.2*quantity;
            final << amount;
        }
        else if(fruit=="grapefruit")
        {
            amount=1.45*quantity;
            final << amount;
        }
        else if(fruit=="orange")
        {
            amount=0.85*quantity;
            final << amount;
        }
        else if(fruit=="pineapple")
        {
            amount=5.5*quantity;
            final << amount;
        }
        else if(fruit=="grapes")
        {
            amount=3.85*quantity;
            final << amount;
        }
        else 
        {
            final << "Invalid Input" ;
        }
        return final.str();
    }

    else if (day=="Sunday")
    {
        if(fruit=="kiwi")
        {
            amount=3*quantity;
            final << amount;
        }
        else if(fruit=="banana")
        {
            amount=2.7*quantity;
            final << amount;
        }
        else if(fruit=="apple")
        {
            amount=1.25*quantity;
            final << amount;
            
        }
        else if(fruit=="grapefruit")
        {
            amount=1.6*quantity;
            final << amount;
        }
        else if(fruit=="orange")
        {
            amount=0.9*quantity;
            final << amount;
        }
        else if(fruit=="pineapple")
        {
            amount=5.6*quantity;
            final << amount;
        }
        else if(fruit=="grapes")
        {
            amount=4.2*quantity;
            final << amount;
        }
        else 
        {
            final << "Invalid Input" ;
            
        }
        return final.str();

    }



}