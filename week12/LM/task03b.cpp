#include<iostream>
using namespace std;

int printCars(int cars[][5], int rowSize);

main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {{10, 7, 12, 10, 4},
                            {18, 11, 15, 17, 2},
                            {23, 19, 12, 16, 14},
                            {7, 12, 16, 0, 2},
                            {3, 5, 6, 2, 1}};
    cout << "Sum: " << printCars(cars, rowSize);
}
int printCars(int cars[][5],int rowSize)
{
    int col=0, sum=0;
    for(int row = 0; row < rowSize; row++)
    {
        sum += cars[row][col];//print specific coloumn
        
    }
    return sum;
}