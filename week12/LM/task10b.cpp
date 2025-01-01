#include<iostream>
using namespace std;

void displayWorld();
void setGravityStatus(bool status);
void timeTick(int times);

char objects[5][5] = {{'-', '#', '#', '-', '#'},
                    {'#', '-', '-', '#', '-'},
                    {'-', '#', '-', '-', '-'},
                    {'#', '-', '#', '-', '#'},
                    {'#', '-', '-', '-', '-'}};
bool gravity = false;
bool isBlackHole = true;

main()
{
    displayWorld();
    setGravityStatus(true);
    timeTick(2);
    cout << endl;
    displayWorld();
}
void displayWorld()
{
    for(int row=0; row<5; row++)
    {
        for(int col=0; col<5; col++)
        {
            cout << objects[row][col] << "\t"; //display elements of array
        }
        cout << endl;
    }
}
void setGravityStatus(bool status)
{
    gravity=status;
}
void timeTick(int times)
{
    if(gravity==true)
    {
        for(int i=0; i< times; i++)
        {
            for(int col=0; col<5; col++)
            {
                for(int row=0; row<5; row++)
                {
                //     if(row != 4)
                //     {
                    if(row == 4 && isBlackHole == true)
                    {//when last row then swap value of row 5 with row 1
                        if(objects[row][col]=='#' && objects[row-4][col]=='-')
                        {
                            char swap=objects[row][col];
                            objects[row][col]=objects[row-1][col];//swap values
                            objects[row-1][col]=objects[row-2][col];
                            objects[row-2][col]=objects[row-3][col];
                            objects[row-3][col]=objects[row-4][col];
                            objects[row-4][col]=swap;
                        }
                        break;
                    }
                    if(row < 4 && objects[row][col]=='#' && objects[row+1][col]=='-')
                    {
                        char swap=objects[row][col];
                        objects[row][col]=objects[row+1][col];
                        objects[row+1][col]=swap;
                        row++;//because if swap values then in next iteration it will again move object
                    }//for this row ++. # - # - # if swap then don't check next but +2 next
                }
            }
        }
    }
}