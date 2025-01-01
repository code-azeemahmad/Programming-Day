#include<iostream>
using namespace std;

int identity(int arr[][3], int rowSize);

main()
{
    int rowSize, index, count;
    cout << "Enter row size: ";
    cin >> rowSize;
    int arr[rowSize][3];
    cout << "Enter the elements of the matrix: "<< endl;
    for(int row=0; row<rowSize; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> arr[row][col];//store elements in array
        }
    }
    count=identity(arr, rowSize);
    cout << "The count of identical rows in the array is: " << count;
}
int identity(int arr[][3], int rowSize)
{
    int count = 0;
    for(int i=0; i<rowSize; i++)
    {
        for(int row=i+1; row<rowSize; row += 1)
        {//each row
            bool isIdentity=true;
            for(int col=0; col<3; col++) 
            {//for each row all coloumns will be check
                if(arr[i][col]==arr[row][col])
                {//compare specific element with all elements of same coloumn or row
                    isIdentity=true;
                }
                else
                {
                    isIdentity=false;
                    break;
                }
            }
            if(isIdentity==true)
            {
                count += 1;
            }
            
        }
    }
    if(count > 0)//becuae if there is identical rows then count 0 to 1
    {//but rows will be 2 so count ++ 
        count++;
    }
    return count;
}