#include<iostream>
using namespace std;

int converter(int cars[][5], int color);

main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {{10, 7, 12, 10, 4},
                            {18, 11, 15, 17, 2},
                            {23, 19, 12, 16, 14},
                            {7, 12, 16, 0, 2},
                            {3, 5, 6, 2, 1}};
    int color;
    cout << "Color index: ";
    cin >> color;
    cout << "Sum: " << converter(cars, color);
}
int converter(int cars[][5],int color)
{
    int row=0, col=0, sum=0;
    for(int row=0; row<5; row++)
    {
        for(int col=0; col<5; col++)
        {
            if(col==color)
            {
                sum += cars[row][col];//sum of all elements
            }
        }
    }
    return sum;
}