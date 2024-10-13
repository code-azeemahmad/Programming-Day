#include<iostream>
#include<cmath>
using namespace std;
int calculateVolleyballGames(string yeartype, int holidaystown, int
hometownweekends);
string yeartype;
int holidaystown, hometownweekends;
int main()
{
    cout<<"Enter year type (normal/leap): ";
    cin>>yeartype;
    cout<<"Enter number of holidays: ";
    cin>>holidaystown;
    cout<<"Enter number of weekends: ";
    cin>>hometownweekends;
    float result;
    result=calculateVolleyballGames(yeartype, holidaystown, hometownweekends);
    cout<<result;
    

}

int calculateVolleyballGames(string yeartype, int holidaystown, int
hometownweekends)
{
    float totalgames;
    
    if (yeartype=="normal")
    {
        float totalweekends=48;
     float townweekends;
        townweekends=totalweekends-hometownweekends;
        float volleyballweekends;
        volleyballweekends=((3.0/4.0)*townweekends);
        float volleyballholidays;
    volleyballholidays=(2.0/3.0)*holidaystown;
    
    
        totalgames=floor(volleyballholidays+volleyballweekends+hometownweekends);
    }
    else
    {
        float totalweekends=48;
     float townweekends;
        townweekends=totalweekends-hometownweekends;
        float volleyballweekends;
        volleyballweekends=(3.0/4.0)*townweekends;
        float volleyballholidays;
    volleyballholidays=(2.0/3.0)*holidaystown;
    
        totalgames=floor((volleyballholidays+volleyballweekends+hometownweekends)*1.15);
    }
    
    return totalgames;

}