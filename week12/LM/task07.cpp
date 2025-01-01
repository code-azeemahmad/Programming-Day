#include<iostream>
using namespace std;

bool isGoalScored(string field[7][16]);

main()
{
    bool isValid;
    string field[7][16] = {
                    {" "," "," "," ","#"," "," "," "," "," "," ","#"," "," "," "," "},
                    {" "," "," "," ","#"," "," ","O"," "," "," ","#"," "," "," "," "},
                    {" "," "," "," ","#"," "," "," "," "," "," ","#"," "," "," "," "},
                    {" "," "," "," ","#","#","#","#","#","#","#","#"," "," "," "," "},
                    {" "," "," "," "," "," "," ","#"," "," "," "," "," "," "," "," "},
                    {" "," "," "," "," "," "," ","#"," "," "," "," "," "," "," "," "},
                    {" "," "," "," "," "," "," ","#"," "," "," "," "," "," "," "," "}};
    if(isGoalScored(field))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
bool isGoalScored(string field[7][16])
{
    for(int row=0; row<3; row += 1)
    {//check specific area only 3 rows and coloumns 
        for(int col=5; col<10; col += 1)
        {
            if(field[row][col]=="O")//if found then true
            {
                return true;
            }
        }
    }
    return false;
}