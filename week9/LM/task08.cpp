#include<iostream>
using namespace std;
void resultingArray(int arr1[],int arr2[], int totalElements, int element2);
main()
{
    int element1, element2, totalElements;
    //element1 refers to element will be in array1
    //element2 refers to element will be in array2
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> element1;
    cout << "Enter " << element1 << " elements for the first array, one per line: ";
    int arr1[element1];
    for(int i=0; i<element1; i++)
    {//store elements in array1
        cin >> arr1[i];//store elements in array as entered by user
    }
    cout << "Enter the number of elements for the second array: ";
    cin >> element2;
    cout << "Enter " << element2 << " elements for the second array, one per line: ";
    int arr2[element2];
    for(int j=0; j<element2; j++)
    {//store elements in array2
        cin >> arr2[j];//store elements in array as entered by user
    }
    totalElements=element1+element2;// totalElements in both array
    resultingArray(arr1, arr2, totalElements, element2);
}
/*function that place first string character at 0 index in new string and second string character
to end of new string and second string will be placed in these elements*/
void resultingArray(int arr1[],int arr2[], int totalElements, int element2)
{
    int newArr[totalElements], ele=0;
    newArr[0]=arr1[0];
    for(int i=1; i<totalElements-1; i++)// start from 1 because at 0 string1 first element store
    {//totalElements-1 because it will left last place for 2nd element of 1st array 
        newArr[i]=arr2[ele];// string2 element at 0 index access
        ele++;//index increases
    }
    newArr[totalElements-1]=arr1[element2-1];
    cout << "Resulting array: [";
    for(int i=0; i<totalElements; i++)// upto total elements of new array
    {
        cout << newArr[i] ;//print numbers of new array
        if(i<totalElements-1)// if last number then it will not print ,
        {
            cout << ", ";
        }
    }
    cout << "]";
}