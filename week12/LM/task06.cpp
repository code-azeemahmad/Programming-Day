#include<iostream>
using namespace std;

bool checkCoordinate(string battle[][5],string coordinate);

main()
{
    string coordinate;
    bool isBoom;
    string battle[5][5]={{".", ".", ".", "*", "*"},
                    {".", "*", ".", ".", "."},
                    {".", "*", ".", ".", "."},
                    {".", "*", ".", ".", "."},
                    {".", ".", "*", "*", "."}};
    cout << "Enter to Fire torpedo(e.g., A1, B3, E5): ";
    cin >> coordinate;
    isBoom=checkCoordinate(battle, coordinate);
    if(isBoom==true)
    {
        cout << "Boom";
        
    }
    else
    {
        cout << "Splash";
    }
}
bool checkCoordinate(string battle[][5],string coordinate)
{
    int count=-1;
    for(int row=65; row<70; row++)//ascii code e.g., A --> 65
    {
        char character=row;//convert ascii into character
        count += 1;//for row
        if(coordinate[0]==character)
        {             
            if(battle[count][coordinate[1]-'1']=="*")//-'1' because to convert in int type
            {        
                return true;
            }
            if(battle[count][coordinate[1]-'1']==".")
            {
                return false;
            }
        }
    }
}