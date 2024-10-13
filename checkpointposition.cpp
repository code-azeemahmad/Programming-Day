#include <iostream>
#include <sstream>
using namespace std;
string checkpointposition(int h, int x, int y);
int h, x, y;
int main()
{
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    string answer;
    answer = checkpointposition(h, x, y);
    cout << answer;
}

string checkpointposition(int h, int x, int y)
{
    stringstream result;
    if (x % 2 == 0 && y % 2 == 0)
    {
        result << "Border";
    }
    else if ((h>1 && y>1 && x==1) || (h>1 && x==3 && y>1) || (h>4 && x==2 && y>4) || (h>1 && x>3 && y>1))
    {
        result << "Outside";
    }
    else 
    {
        result << "Inside";
    }

    return result.str();
}