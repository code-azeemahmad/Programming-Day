#include<iostream>
using namespace std;
int calculateTime(string colors[], int length);
main()
{
    int length, total;
    cout << "Enter number of colors: ";
    cin >> length;
    string colors[length];
    cout << "Enter colors: ";
    for(int i=0; i<length; i++)
    {
        cin >> colors[i];//store elements in array as entered by user
    }
    total=calculateTime(colors, length);
    cout << "Total time(seconds) will be: " << total;
}
int calculateTime(string colors[], int length)
{
    int switchTime=0, colorTime=2, total;
    if(length>1)
    {
        switchTime=length-1;// if 5 colors then 4s switch time is 1
        colorTime=length*2;// 2s to color a pencil
    }
    total=switchTime+colorTime;//total time
    return total;
}