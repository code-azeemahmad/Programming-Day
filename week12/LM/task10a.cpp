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

main()
{
    displayWorld();
    setGravityStatus(true);
    timeTick(3);
    cout << endl;
    displayWorld();
}
void displayWorld()
{
    for(int row=0; row<5; row++)
    {
        for(int col=0; col<5; col++)
        {
            cout << objects[row][col] << "\t"; 
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
        {//in each i value object will move just one step
            for(int col=0; col<5; col++)
            {
                for(int row=0; row<4; row++)
                {
                    if(objects[row][col]=='#' && objects[row+1][col]=='-')
                    {//if found then swap values
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