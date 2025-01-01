#include<iostream>
using namespace std;

int calculateVolume(int arr[], int volume[], int length);


main()
{
    int length, sum;
    cout << "Array Length: ";
    cin >> length;
    int arr[length] , volume[length];
    cout << "Enter Array: " << endl;
    for(int i=0; i<length; i++)
    {
        cin >> arr[i];//store data in array as entered by user
    }
    sum=calculateVolume(arr, volume, length);
    cout << sum;
}
int calculateVolume(int arr[], int volume[], int length)
{
    int sum=0;
    for(int i=0; i<length; i += 3)//+3 because first element is height, 2nd base, 3 area
    {
        sum=sum + (arr[i]*arr[i+1]*arr[i+2]);
    }
    return sum;
}
