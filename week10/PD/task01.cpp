#include<iostream>
using namespace std;

bool check(int arr[], int length);

main()
{
    int length;
    cout << "Enter array Length: ";
    cin >> length;
    int arr[length];
    cout << "Enter array: " << endl;
    for(int i=0; i<length; i++)
    {
        cin >> arr[i];//store data in array
    }
    cout << check(arr, length);
}
bool check(int arr[], int length)
{
    bool isValid=true;
    for(int i=0; i<length; i++)//till length of array
    {
        int k=0;
        for(int j=0; j<length; j++)
        {// check whether i's value is in array or not
            if(arr[i]==arr[j])
            {
                k += 1;
            }
        }
        if(arr[i]<1 || arr[i]>length || k>1)//check is in range and (k for) repeat
        {
            isValid=false;
            break;
        }
    }
    return isValid;
}