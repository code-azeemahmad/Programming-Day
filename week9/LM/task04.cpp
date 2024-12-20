#include<iostream>
using namespace std;
void printReverseArray(int arr[],int n);
main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if(n>0)
    {
        int arr[n];//
        cout << "Enter " << n << " numbers, one per line: ";
        for(int i=0; i<n; i++)//store elements in array as entered by user
        {
            cin >> arr[i];
        }
        cout << "Numbers in reverse order: ";
        printReverseArray(arr, n);
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}
// function execute to reverse the array
void printReverseArray(int arr[],int n)
{
    for(int i=n-1; i>=0; i--)// loop execute from end 
    {
        cout << arr[i] << " ";
    }
}