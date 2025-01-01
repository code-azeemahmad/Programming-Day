#include<iostream>
using namespace std;

bool isRepeatingCycle(int pattern, int length);

int arr[32];

main()
{
    int length, pattern;
    cout << "Array Length: ";
    cin >> length;
    cout << "Enter Array: " << endl;
    for(int i=0; i<length; i++)
    {
        cin >> arr[i];//store data in array from user
    }
    cout << "Enter Cycle pattern: ";
    cin >> pattern;
    cout << isRepeatingCycle(pattern, length);
}
bool isRepeatingCycle(int pattern, int length)
{
    bool isRepeat=true;
    if(pattern<length)
    {
        for(int j=0; j<length-pattern; j += 1)//because if condition 
        {
            if(arr[j]==arr[j+pattern])//if pattern=2 then until 3rd last element (for loop)
            {//[2, 3, 3, 3, 4, 3, 5, 6]for loop till 4 and with if all elements will cover
                isRepeat=true;
            }
            else
            {
                isRepeat=false;
                break;
            }
        }
    }
    else//if pattern greater than length than automatically return true
    {
        return isRepeat;
    }
    return isRepeat;
}