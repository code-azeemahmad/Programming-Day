#include<iostream>
using namespace std;
int convert(int hr);
int hours, hour, hr, minutes;
int main()
{

cout<<"Enter the number of Hours: ";
cin>>hours;
cout<<"Enter the number of Minutes: ";
cin>>minutes;
hour=convert(hr);
if (hour >= minutes)
{
    cout<<"Longest Time: " <<hours;
}
else
{
    cout<<"Longest Time: " <<minutes;

}


}
int convert(int hr)
{
    hr=hours*60;
    return hr;
}