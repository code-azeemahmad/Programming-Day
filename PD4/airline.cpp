
#include <iostream>
using namespace std;
int main()
{
    string name;
    float ticket, discount;
    while(true)
    {

    
    cout << "Enter the Country's Name: ";
    cin >> name;
    cout << "Enter the Ticket Price in dollars: $";
    cin >> ticket;

    if (name == "Pakistan")
    {
        discount=ticket-(0.05*ticket);
    }
    if (name == "Ireland")
    {
        discount=ticket-(0.1*ticket);
    }
    if (name == "India")
    {
        discount=ticket-(0.2*ticket);
    }
    if (name == "England")
    {
        discount=ticket-(0.3*ticket);
    }
    if (name == "Canada")
    {
        discount=ticket-(0.45*ticket);
    }

    cout<<"Final ticket price after discount: $" <<discount <<endl;
    

    }
return 0;
}