#include<iostream>
using namespace std;
int checkLargest(int arr[], int number);
main()
{
    int number;
    cout << "Enter the number of elements: ";
    cin >> number;
    cout << "Enter " << number << " numbers, one per line: ";
    int arr[number];
    for(int i=0; i<number; i++)//store elements in array as entered by user
    {
        cin >> arr[i];
    }
    cout << "The largest number entered is: " << checkLargest(arr, number);
}
//check largest number among numbers in array
int checkLargest(int arr[], int number)
{
    int larger=0;
    for(int i=0; i<number; i++)//execute until length of array
    {
        if(larger<arr[i])//if arr[i]==larger then larger variable value will update
        {
            larger=arr[i];
        }
    } 
    return larger;   
}