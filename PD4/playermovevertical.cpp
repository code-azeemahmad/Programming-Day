#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
void playermove(int x,int y);
main()
{
	int x=15,y=1;
	int direction=1;
while(true)
	{
	system("cls");
	printmaze();
	playermove(x,y);
	y=y+direction;
	if(y==14 || y==1)       /*The || operator in C++ (and many other programming languages)
	                         is the logical OR operator. It is used to combine two or more 
							 conditions, and the result is true if any one of the conditions is true.*/
	{
	direction=-direction ;
	}
	Sleep(200);
	}
	gotoxy(0,16);
	return 0;
}

void playermove(int x,int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(200);
	gotoxy(x,y);
	cout<<" ";
}
void printmaze()
{
cout<<"     #####################################      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     ##                                 ##      "<<endl;
cout<<"     #####################################      "<<endl;

}
void gotoxy(int x, int y)
{
COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}