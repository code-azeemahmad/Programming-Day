#include<iostream>
using namespace std;
void check(int arr[][3]);
main()
{
    int arr[3][3];
    cout << "Enter the elements of the matrix: " << endl;
    for(int col=0; col<3; col++)
    {
        for(int row=0; row<3; row++)
        {
            cout << "Enter element at position [" << col << "][" << row << "]: ";
            cin >> arr[row][col];//store elements in 2D array
            
        }
    }
    check(arr);
}
void check(int arr[][3])
{
    bool isValid=true;
    for(int col=0; col<3; col++)
    {
        for(int row=0; row<3; row++)
        {
            if(row==col && arr[row][col]==1)//check diangonal
            {
                isValid=true;
            }
            else if(row!=col && arr[row][col]==0)//check no diagonally elements
            {
                isValid=true;
            }
            else
            {
                isValid=false;//if 0 or 1 is not its desired position
                break;
            }
        }
        if(isValid==false)
        {
            break;//if isvalid == false mean if each element is not its desired position
        }
    }
    if(isValid==true)
    {
        cout << "The entered matrix is an identity matrix.";
    }
    else
    {
        cout << "The entered matrix is NOT an identity matrix.";
    }
}