#include<iostream>
#include<cmath>

using namespace std;
float projecttimecalculation(float days,float hours,float workers);
float days,hours,workers,lefthours;
const float workinghours=10;
int main()
{
    cout<<"Enter the needed hour: ";
    cin>>hours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    float diff=projecttimecalculation(days,hours,workers);
    if (diff>hours)
    {
        cout<<"Yes! " <<diff <<" hours left.";
    }
    else
    {
        cout<<"Not enough time! " <<abs(diff) <<" hours needed.";
    }
    return 0;

}
float projecttimecalculation(float days, float hours, float workers)
{
    float workingdays=days-(0.1*days);
    float totalworkinghours=workers*workinghours*workingdays;
    float lefthours=totalworkinghours-hours;
    return lefthours;
}