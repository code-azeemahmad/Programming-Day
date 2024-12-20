#include<iostream>
using namespace std;
string checkCharacter(int arr[], int arrayLength);
main()
{
    int arrayLength;
    cout << "Enter array Length: ";
    cin >> arrayLength;//array length
    int arr[arrayLength];
    cout << "Enter numbers: ";//array elements
    for(int i=0; i<arrayLength; i++)
    {
        cin >> arr[i];//store elements entered by user
    }
    cout << checkCharacter(arr, arrayLength);
}
string checkCharacter(int arr[], int arrayLength)
{
    int numberLength;
    string number;
    for(int i=0; i<arrayLength; i++)//loop execute upto array length
    {
        number=to_string(arr[i]);//store number as string
        numberLength=number.length();
        if(numberLength!=1)
        {
            for(int i=0; i<numberLength; i++)
            {
                if(number[i]=='7')//if there is 7 in number
                {
                    return "Boom!";
                }
            }
        }
        else if (numberLength == 1)//if only one character 
        {
            char charac=number[0];
            if(charac=='7')// if that one character is 7
            {
                return "Boom!";
            }
        }
    }
    return "there is no 7 in the array";
}