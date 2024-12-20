#include<iostream>
using namespace std;
void printReverseArray(int arr[],int n);
bool isAlreadyEntered(int arr[], int size, int number);
main()
{
    int number;
    cout << "Enter the number of elements: ";// total elements of array
    cin >> number;
    if(number>0)// if number is non_negative
    {
        int arr[number];// declare array
        bool alreadyEntered=false;
        cout << "Enter " << number << " numbers, one per line: ";
        for(int i=0; i<number; i++)
        {
            cin >> arr[i];//store data in array
            int n=arr[i];// store entered array in separate variable to pass to function
            alreadyEntered=isAlreadyEntered(arr, i, n);
            if(alreadyEntered==true)
            {
                cout << "Already entered: " << arr[i] << endl;
                cout << "Unique numbers entered: ";
                i=0;
            }
        }
        cout << "Numbers in reverse order: ";
        printReverseArray(arr, number);
    }
    else
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
}
void printReverseArray(int arr[],int number)
{
    for(int i=number-1; i>=0; i--)// it will print array revers
    {
        cout << arr[i] << " ";
    }
}
bool isAlreadyEntered(int arr[], int size, int number)
{
    for(int j=size-1; j>=0; j--)// size==i
    {//chceck from 0 to i that whether it already entered
        if(arr[size]==arr[j])//arr[size]== fix value which entered by user currently
        {//arr[j] is start from 0 to index of second last entered number
            return true;
        }
    }
    return false;// if not entered first
}