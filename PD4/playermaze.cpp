#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
void playermove(int x,int y);
main()
{
	int x=12,y=4;
while(true)
	{
	system("cls");
	printmaze();
	playermove(x,y);
	x=x+1;
	if(x==30)
	{
	x=12;
	}
	}
	gotoxy(0,16);
}




void playermove(int x,int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(500);
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