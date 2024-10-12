#include<iostream>
using namespace std;
main()
{
    string day;
    int purchase;
    int payable;

    cout<<"Enter the Day of Purchase: ";
    cin>>day;
    cout<<"Enter the Total Purchase Amount: $";
    cin>>purchase;
    if (day=="Sunday")
    {
        payable=purchase-(0.1*purchase);
        cout<<"Payable Amount: " << payable;
    }
    else
    {
        payable=purchase;
        cout<<"Payable Amount: $"<<payable;

    }
    
}