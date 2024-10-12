#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string find_zodiac_sign(int day, string month);
int day;
string month;
int main()
{
    string sign;
    cout << "Enter the Day of birth: ";
    cin >> day;
    cout << "Enter the Month of birth: ";
    cin >> month;
    sign = find_zodiac_sign(day, month);
    cout << "Zodiac Sign: " << sign;
}

string find_zodiac_sign(int day, string month)
{
    stringstream zodiac;
    if ((day >= 21 && day <= 31 && month == "March") || (day >= 1 && day <= 19 && month == "April"))
    {
        zodiac << "Aries";
    }
    else if ((day >= 20 && day <= 30 && month == "April") || (day >= 1 && day <= 20 && month == "May"))
    {
        zodiac << "Taurus";
    }
    else if ((day >= 21 && day <= 31 && month == "May") || (day >= 1 && day <= 20 && month == "June"))
    {
        zodiac << "Gemini";
    }
    else if ((day >= 21 && day <= 30 && month == "June") || (day >= 1 && day <= 22 && month == "July"))
    {
        zodiac << "Cancer";
    }
    else if ((day >= 23 && day <= 31 && month == "July") || (day >= 1 && day <= 22 && month == "Augest"))
    {
        zodiac << "Leo";
    }
    else if ((day >= 23 && day <= 31 && month == "Augest") || (day >= 1 && day <= 22 && month == "September"))
    {
        zodiac << "Virgo";
    }
    else if ((day >= 23 && day <= 30 && month == "September") || (day >= 1 && day <= 22 && month == "October"))
    {
        zodiac << "Libra";
    }
    else if ((day >= 23 && day <= 31 && month == "October") || (day >= 1 && day <= 21 && month == "November"))
    {
        zodiac << "Scorpio";
    }
    else if ((day >= 22 && day <= 30 && month == "November") || (day >= 1 && day <= 21 && month == "December"))
    {
        zodiac << "Sagittarius";
    }
    else if ((day >= 22 && day <= 31 && month == "December") || (day >= 1 && day <= 19 && month == "January"))
    {
        zodiac << "Capricorn";
    }
    else if ((day >= 20 && day <= 31 && month == "January") || (day >= 1 && day <= 18 && month == "Febrauary"))
    {
        zodiac << "Aquarius";
    }

    return zodiac.str();
}