#include<iostream>
using namespace std;

int rotation(string arr[], int length);

main()
{
    int length;
    cout << "Enter string array length: ";
    cin >> length;
    string arr[length];
    cout << "Enter array: " << endl;
    for(int i=0; i<length; i++)
    {
        cin >> arr[i];
    }
    cout << rotation(arr, length);
}
int rotation(string arr[], int length)
{
    int add=0;
    int divide;
    if(arr[0]=="right")//rotation
    {
        for(int i=0; i<length; i++)
        {
            if(arr[i]=="right")//if right then +90
            {
                add += 90;
            }
            if(arr[i]=="left")// -90
            {
                add -= 90;
            }
        }

    }
    else
    {
        for(int i=0; i<length; i++)
        {
            if(arr[i]=="left")//if first rotate left then in each left rotation +90
            {
                add += 90;
            }
            if(arr[i]=="right")// -90
            {
                add -= 90;
            }
        }
    }
    divide=add/360;//now find how many circle rotation if 360 then 1 circle
    return divide;
}