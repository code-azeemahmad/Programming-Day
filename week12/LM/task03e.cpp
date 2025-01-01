#include<iostream>
using namespace std;

void printCars(int cars[][5]);

main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {{10, 7, 12, 10, 4},
                            {18, 11, 15, 17, 2},
                            {23, 19, 12, 16, 14},
                            {7, 12, 16, 0, 2},
                            {3, 5, 6, 2, 1}};
    printCars(cars);
}
void printCars(int cars[][5])
{
    
    
    for(int col = 0; col < 5; col++)
    {
        for(int row=0; row<5; row++)
        {
            cout << cars[row][col] << "\t";//display after transpose i.e., row into columns and vice versa
        }
        cout << endl;
    }
    
}