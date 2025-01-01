#include<iostream>
using namespace std;
main()
{
    int rowSize, sum=0;
    cout << "Enter row size: ";
    cin >> rowSize;
    int arr[rowSize][3];
    cout << "Enter the elements of the matrix: " << endl;
    for(int col=0; col<3; col++)
    {
        for(int row=0; row<rowSize; row++)
        {
            cout << "Enter element at position [" << col << "][" << row << "]: ";
            cin >> arr[row][col];//get element and store in array 
            sum += arr[row][col];
        }
    }
    cout << "The sum of elements in the matrix is: " << sum;//display sum of elements
}