#include<iostream>
using namespace std;

void sorting(int arr[]);

main()
{

    int arr[10];
    cout << "Enter Packages: "<< endl;
    for(int i=0; i<10; i++)
    {
        cin >> arr[i];
    }
    sorting(arr);
    cout << "[";//to form an array shape
    for(int i=0; i<10; i++)
    {
        cout << arr[i];
        if(i<9)// till 2nd last element
        {
            cout << ", ";
        }
    }
    cout << "]";
}
void sorting(int arr[])
{
    int value;
    for(int i=0; i<10; i++)//for 10 digits
    {
        for(int j=0; j<10; j++)//for one digit to check in whole 10 elements
        {
            if(arr[j]>arr[j+1])//if j+1 is greater, then swap values
            {
                value=arr[j+1];//swap values
                arr[j+1]=arr[j];
                arr[j]=value;
            }
        }
    }   
}