#include<iostream>
using namespace std;

int matrix(int arr[][5], int rowSize);
void swap(int index, int arr[][5], int rowSize);

main()
{
    int rowSize, index;
    cout << "Enter row size: ";
    cin >> rowSize;
    int arr[rowSize][5];
    cout << "Enter the elements of the matrix: "<< endl;
    for(int row=0; row<rowSize; row++)
    {
        for(int col=0; col<5; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> arr[row][col];//store element in array
        }
    }
    cout << endl << "Original Matrix: " << endl;
    for(int row=0; row<rowSize; row++)
    {
        for(int col=0; col<5; col++)
        {
            cout << arr[row][col] << "\t";//display original matrix
        }
        cout << endl;
    }
    index=matrix(arr, rowSize);//matrix which will find column which has maximum sum of its elements
    swap(index, arr, rowSize);
}
int matrix(int arr[][5], int rowSize)
{
    int sum=0, index=0, max=0, partIndex;
    for(int col=0; col<5; col++)
    {
        for(int row=0; row<rowSize; row++)
        {
            sum += arr[row][col];
        }
        if(sum>max)
        {
            max=sum;
            partIndex=index;//max. sum coloumn index
        }
        sum = 0;
        index += 1;
    }
    return partIndex;
}
void swap(int index, int arr[][5], int rowSize)
{
    for(int i=0; i<rowSize; i++)
    {
        int swap=arr[i][index];//swapping
        arr[i][index]=arr[i][0];
        arr[i][0]=swap;
    }
    cout << endl;
    cout << "Matrix after largest column moved to first: " << endl;
    for(int row=0; row<rowSize; row++)
    {
        for(int col=0; col<5; col++)
        {
            cout << arr[row][col] << "\t";
        }
        cout << endl;
    }
}