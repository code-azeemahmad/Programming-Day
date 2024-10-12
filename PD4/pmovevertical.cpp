#include <iostream>
#include <windows.h>
void printmaze();
void gotoxy(int x, int y);
void playermove(int x,int y);
using namespace std;
int main()
{
    int x=19,y=1;
    system("cls");
    printmaze();
    while (true)
    {
        playermove(x,y);
        y=y+1;
        if(y==13)
        {
            break;
        }

          }
    while(true)
    {   
        playermove(x,y);
        y=y-1;
        if(y==1)
        {
            break;
        }

    }
    while (true)
    {
        playermove(x,y);
        y=y+1;
        if(y==13)
        {
            break;
        }

          }
          while(true)
    {   
        playermove(x,y);
        y=y-1;
        if(y==0)
        {
            break;
        }

    }
          gotoxy(0,20);
          return 0;
    
}
void playermove(int x,int y)
{
    gotoxy(x, y);
    cout << "P";
    Sleep(100);
    gotoxy(x,y);
     cout << " ";
     
    
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze()
{
    cout << "#####################################  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#                                   #  " << endl;
    cout << "#####################################  " << endl;
}