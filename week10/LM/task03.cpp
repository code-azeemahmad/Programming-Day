#include<iostream>
using namespace std;

void checkPeakValue(int arr[], int newArr[], int length);
int calculateLength(int newArr[]);

int length;

main()
{
    cout << "How many elements you want to Enter: ";
    cin >> length;
    int arr[length], newArr[length];
    cout << "Enter array: " << endl;
    for(int i=0; i<length; i++)
    {
        cin >> arr[i];//entered data will store in array
    }
    checkPeakValue(arr, newArr, length);
    int ArrLength=calculateLength(newArr);
    if(ArrLength>0)
    {
        cout << "[";
        for(int i=0; i<ArrLength; i++)
        {
            cout << newArr[i];
            if(i<ArrLength-1)//till second last element
            {
                cout << ", ";
            }
        }
        cout << "]";
    }
    else
    {
        cout << "No Peak found";
    }
}
void checkPeakValue(int arr[], int newArr[], int length)
{
    int count=0;
    for(int i=1; i<length-1; i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])//peak value found
        {
            newArr[count]=arr[i];//newArr will update when peak found
            count += 1;
        }
    }
    
}
int calculateLength(int newArr[])
{
    int count=0;
    for(int i=0; i<length; i++)
    {//check found
        if(newArr[i]==0 || newArr[i]==1 || newArr[i]==2 || newArr[i]==3 || newArr[i]==4 || newArr[i]==5 || newArr[i]==6 || newArr[i]==7 || newArr[i]==8 || newArr[i]==9)
        {
            count += 1;//if found then ++
        }
        else
        {
            break;//if no found then break
        }
    }
    return count;
}