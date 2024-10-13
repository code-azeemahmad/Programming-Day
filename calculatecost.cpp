#include <iostream>
#include <cmath>
using namespace std;
float calculatecost(float budget, string category, int numpeople);
int main()
{
    float budget;
    string category;
    int numpeople;
    float answer;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in the group: ";
    cin >> numpeople;
    answer = calculatecost(budget, category, numpeople);
    if (answer > 0)
    {
        cout << "Yes! You have " << answer << " Qatari Riyal left";
    }
    else if (answer < 0)
    {
        cout << "Not enough money! You need " << abs(answer) << " Qatari Riyal";
    }
}
float calculatecost(float budget, string category, int numpeople)
{

    float trans;
    float ticketprice;
    float left;
    if (category == "VIP")
    {
        ticketprice = numpeople * 499.99;
        if (numpeople <= 4)
        {
            trans = (budget * 0.75);
            left = budget - trans - ticketprice;
        }
        else if (numpeople >= 5 && numpeople <= 9)
        {
            trans = (budget * 0.60);
            left = budget - trans - ticketprice;
        }
        else if (numpeople >= 10 && numpeople <= 24)
        {
            trans = (budget * 0.50);
            left = budget - trans - ticketprice;
        }
        else if (numpeople >= 25 && numpeople <= 49)
        {
            trans = (budget * 0.40);
            left = budget - trans - ticketprice;
        }
        else if (numpeople >= 50)
        {
            trans = (budget * 0.25);
            left = budget - trans - ticketprice;
        }
    }

    else if (category == "normal")
    {
        ticketprice = numpeople * 249.99;
        if (numpeople <= 4)
        {
            trans = (budget * 0.75);
            left = budget - trans - ticketprice;
        }
        else if (numpeople >= 5 && numpeople <= 9)
        {
            trans = (budget * 0.60);
            left = budget - trans - ticketprice;
        }
        else if (numpeople >= 10 && numpeople <= 24)
        {
            trans = (budget * 0.50);
            left = budget - trans - ticketprice;
        }
        else if (numpeople >= 25 && numpeople <= 49)
        {
            trans = (budget * 0.40);
            left = budget - trans - ticketprice;
        }
        else if (numpeople >= 50)
        {
            trans = (budget * 0.25);
            left = budget - trans - ticketprice;
        }
    }

    return left;
}
