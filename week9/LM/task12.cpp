#include<iostream>
using namespace std;
bool specialArray(int arr[], int size);
main()
{
    int size;
    bool isSpecial; 
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements of the array: " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];//store elements in array as entered by user
    }
    isSpecial=specialArray(arr, size);
    if(isSpecial==true)//mean at even index even number is pace and at odd index, odd place
    {
        cout << "The array is special." ;
    }
    else
    {
        cout << "The array is not special." ;
    }
}
bool specialArray(int arr[], int size)
{
    bool isSpecial=false;
    for(int i=0; i<size; i++)
    {
        if(i%2==0)//check index
        {
            if(arr[i]%2==0)//check number in array
            {
                isSpecial=true;
            }
            else
            {
                isSpecial=false;
                break;//if one element is wrong position mean not fulfill specialarray requirements
            }// then break the loop
        }
        else
        {
            if(arr[i]%2!=0)
            {
                isSpecial=true;
            }
            else
            {
                isSpecial=false;
                break;
            }
        }
    }
    return isSpecial;
}