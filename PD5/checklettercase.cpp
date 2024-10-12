#include<iostream>
using namespace std;
string checkalphabetcase();
char character;
string c;
int main()
{  
    cout<<"Enter a character(A/a): ";
    cin>>character;
    c=checkalphabetcase();
}
string checkalphabetcase()
{

    if (character=='A')
    {
        cout<<"You have entered capital A";
    }
    else 
    {
        cout<<"You have entered small a";
    }
}