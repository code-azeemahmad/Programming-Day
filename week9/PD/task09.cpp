#include<iostream>
using namespace std;
void checkMoves(string danceMoves[],string code);
main()
{
    
    string code, danceMoves[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    cout << "Enter Pin: ";
    cin >> code;//pin
    checkMoves(danceMoves, code);
}
void checkMoves(string danceMoves[],string code)
{
    int index=0, indexValue;
    bool isValid=true;
    for(int i=0; i<4; i++)//pin has 4 characters
    {
        if(code[i]<'0' || code[i]>'9')
        {
            cout << "Invalid input";
            isValid=false;
            break;
        }

    }
    if(isValid==true)
    {
        for(int j=0; j<4; j++)//execute 4 time because pin has 4 characters
        {
            for(int k=0; k<=9; k++)//check number
            {
                if(code[j] - '0' == k)
                {
                    indexValue=k+index;
                    if(indexValue>9)
                    {//every time check character of number like if 4 then in each iteration index +1 increase
                        indexValue=indexValue-9;//if index is greater from 9 then again start from 0
                        cout << danceMoves[indexValue-1];
                    }
                    else
                    {
                        cout << danceMoves[indexValue];
                    }
                    if(j<3)//print until second last item
                    {
                        cout << ", ";
                    }
                }
            }
            index=index+1;//index will increase
        }
    }
}