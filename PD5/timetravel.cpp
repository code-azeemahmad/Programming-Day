#include<bits/stdc++.h>
using namespace std;
int hours,minutes;
int timetravel(int hours, int minutes);
int main()
{
    cout<<"Enter hours: ";
    cin>>hours;
    cout<<"Enter minutes: ";
    cin>>minutes;
    minutes= minutes+15;
    if (minutes>=45)
    {

        hours+=1;
        minutes=(minutes)-60;
    }
   
    cout<<hours <<":" << minutes;
}

