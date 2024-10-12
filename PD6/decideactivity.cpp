#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string decide_activity(string temperature, string humidity);
int main()
{
    string temperature,humidity,result;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temperature;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    result=decide_activity(temperature, humidity);
    cout<<"Recommended activity: " << result;
    
}
string decide_activity(string temperature, string humidity)
{
    stringstream decision;
    if (temperature=="warm" && humidity=="dry")
    {
        decision << "Play tennis";
    }
    else if (temperature=="cold" && humidity=="dry")
    {
        decision << "Play basketball";
    }
    else if (temperature=="warm" && humidity=="humid")
    {
        decision << "swim";
    }
    else if (temperature=="cold" && humidity=="humid")
    {
        decision << "watch tv";
    }
    return decision.str();


}