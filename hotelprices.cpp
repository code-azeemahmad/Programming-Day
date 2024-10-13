#include <iostream>
#include <sstream>
#include <string>
using namespace std;
float calculateapartmentprices(string month, int stays);
float calculatestudioprices(string month, int stays);
int main()
{
    string month;
    int stays;
    float p1, p2;
    cout << "Enter the Month (May, October, June, July, Augest, September): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stays;
    p1 = calculateapartmentprices(month, stays);
    cout << "Apartment: " << p1 << endl;
    p2 = calculatestudioprices(month, stays);
    cout << "Studio: " << p2 << endl;
}
float calculateapartmentprices(string month, int stays)
{
    float discount1, price1;
    if (stays > 14 && (month == "May" || month == "October"))
    {
        price1 = stays * 65;
        discount1 = price1 - (price1 * 0.1);
    }
    else if (stays > 14 && (month == "June" || month == "September"))
    {
        price1 = stays * 68.7;
        discount1 = price1 - (price1 * 0.1);
    }
    else if (stays > 14 && (month == "July" || month == "Augest"))
    {
        price1 = stays * 77;
        discount1 = price1 - (price1 * 0.1);
    }
    if (stays <= 14 && (month == "May" || month == "October"))
    {
        price1 = stays * 65;
        discount1 = price1;
    }
    else if (stays <= 14 && (month == "June" || month == "September"))
    {
        price1 = stays * 68.7;
        discount1 = price1;
    }
    else if (stays <= 14 && (month == "July" || month == "Augest"))
    {
        price1 = stays * 77;
        discount1 = price1;
    }

    return discount1;
}

float calculatestudioprices(string month, int stays)
{
    float price2, discount2;
    if (stays > 7 && stays <= 14 && (month == "May" || month == "October"))
    {
        price2 = stays * 50;
        discount2 = price2 - (price2 * 0.05);
    }
    else if (stays > 14 && (month == "June" || month == "September"))
    {
        price2 = stays * 75.2;
        discount2 = price2 - (price2 * 0.2);
    }
    else if (stays == 14 && (month == "June" || month == "September"))
    {
        price2 = stays * 75.2;
        discount2 = price2;
    }
    else if (stays > 14 && (month == "May" || month == "October"))
    {
        price2 = stays * 50;
        discount2 = price2 - (price2 * 0.3);
    }
    else if (month == "July" || month == "Augest")
    {
        price2 = stays * 76;
        discount2 = price2;
    }

    return discount2;
}
