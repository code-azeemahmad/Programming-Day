#include<iostream>
using namespace std;

int printCars(int cars[][5], int colSize);

main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {{10, 7, 12, 10, 4},
                            {18, 11, 15, 17, 2},
                            {23, 19, 12, 16, 14},
                            {7, 12, 16, 0, 2},
                            {3, 5, 6, 2, 1}};
    cout << "Sum: " << printCars(cars, colSize);
}
int printCars(int cars[][5],int colSize)
{
    int row=2, sum=0;
    for(int col = 0; col < colSize; col++)
    {
        sum += cars[row][col];//sum of elements of specific row
        
    }
    return sum;
}