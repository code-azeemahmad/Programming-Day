#include<iostream>
using namespace std;

int progress(int arr[],int length);

main()
{
    int length;
    cout << "Enter the length of array: ";
    cin >> length;//get length
    int arr[length];//declare array
    cout << "Enter array: " << endl;
    for(int i=0; i<length; i++)
    {
        cin >> arr[i];//cin till length
    }//enterd data will be stored in array
    cout << progress(arr, length);
}

int progress(int arr[],int length)
{
    int count=0;
    for(int i=1; i<length; i++)
    {
        // character=arr[i];
        if(arr[i]>arr[i-1])//if array's elements are from smaller to bigger than count += 1
        {
            count += 1;
        }
    }
    return count;
}