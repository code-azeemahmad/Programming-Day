#include <iostream>
#include <cmath>
using namespace std;
float charges_premium(int minutes, char time);
float charges_regular(int minutes);
int main()
{
    char code;
    int minutes;
    char time;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;
    if (code == 'P' || code == 'p')
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
        cout << "Enter the number of minutes used: ";
        cin >> minutes;
        cout << "Service Type: Premium" << endl;
        cout << "Total minutes used: " << minutes << " minutes" << endl;
        float pdue = charges_premium(minutes, time);
        cout << "Amount Due: $" << pdue << endl;
    }
    else if (code == 'R' || code == 'r')
    {
        cout << "Enter the number of minutes used: ";
        cin >> minutes;
        cout << "Service Type: Regular" << endl;
        cout << "Total minutes used: " << minutes << " minutes" << endl;
        float rdue = charges_regular(minutes);
        cout << "Amount Due: $" << rdue << endl;
    }
    else
    {
        cout << "Error";
    }
}

float charges_regular(int minutes)
{
    float chargesregular;
    if (minutes > 50)
    {
        chargesregular = ((minutes - 50) * 0.2) + 10;
    }
    else if (minutes <= 50)
    {
        chargesregular = 10;
    }
    return chargesregular;
}

float charges_premium(int minutes, char time)
{
    float chargespremium;
    if (minutes > 75 && minutes <= 100 && (time == 'D' || time == 'd'))
    {
        chargespremium = ((minutes - 75) * 0.1) + 25;
    }
    else if (minutes > 100 && (time == 'N' || time == 'n'))
    {
        chargespremium = ((minutes - 100) * 0.05) + 25;
    }
    else if (minutes <= 75)
    {
        chargespremium = 25;
    }
    return chargespremium;
}