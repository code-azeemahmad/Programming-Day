#include<iostream>
#include<windows.h>
using namespace std;
void printA();
void printZ();
void printE();
void printM();
void gotoxy(int x,int y);
main()
{
	system("cls");
	gotoxy(50,10);
	printA();
	gotoxy(50,11);
	printZ();
	gotoxy(50,12);
	printE();
	gotoxy(50,13);
	printE();
	gotoxy(50,14);
	printM();
	gotoxy(0,20);
}
void printA()
{cout<<"A";}
void printZ()
{cout<<"Z";}
void printE()
{cout<<"E";}
void printM()
{cout<<"M";}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}