#include<iostream>
#include<sstream>
using namespace std;
string checkspeed(int speed);
int main()
{
    int speed;
    cout<<"Enter Speed: ";
    cin>>speed;
    string answer;
    answer=checkspeed(speed);
    cout<<answer;


}
string checkspeed(int speed)
{
    stringstream result;
    if (speed<=10)
    {
        result << "Slow";
    }
    else if (speed>10 && speed<=50)
    {
        result << "Average";
    }
    else if (speed>50 && speed<=150)
    {
        result << "Fast";
    }
    else if (speed>150 && speed<=1000)
    {
        result << "Ultra Fast";
    }
    else if (speed>1000)
    {
        result << "Extremely Fast";
    }

    return result.str();
    
}