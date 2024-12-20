#include<iostream>
using namespace std;

void calculateIntegers(int arr[], int length, int times);

main()
{
    int length, times;
    cout << "Enter length of array: ";
    cin >> length;
    int arr[length];
    cout << "Enter array: " << endl;
    for(int i=0; i<length; i++)
    {
        cin >> arr[i];//store elements entered by user
    }
    cout << "Enter number of times even-odd trasnformation need to be done: ";
    cin >> times;
    calculateIntegers(arr, length, times);
}
//function that perform calculation on specific criteria
//for even -2 and for odd +2
void calculateIntegers(int arr[], int length, int times)
{
    int arr1[length];
    int even=0, odd=0;
    for(int i=0; i<length; i++)
    {
        if(arr[i]%2==0)
        {
            even=arr[i];//give even element to even
            for(int i=1; i<=times; i++)
            {
                even=even-2;
            }
            cout << even ;
            if(i<length-1)
            {
                cout << ",";
            }
        }
        else
        {
            odd=arr[i];//give odd element to odd
            for(int i=1; i<=times; i++)
            {
                odd=odd+2;
            }
            
            cout << odd ;
            if(i<length-1)//until second last element
            {
                cout << ",";
            }
        }
    }
}