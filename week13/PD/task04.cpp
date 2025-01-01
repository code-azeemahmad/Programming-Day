#include<iostream>
#include<fstream>
using namespace std;
string read(string line);
main()
{
    string line;
    fstream file;
    file.open("task04.txt", ios::in);
    getline(file, line);
    cout << read(line);
}
string read(string line)
{
    string newLine="";
    int length=line.length();
    for(int i=0; i<length; i++)
    {
        if(line[i]=='"')//if found "
        {
            for(int j=i+1; j<length; j++)
            {
                if(line[j]=='"')//if found next " then break other wise add in string
                break;
                newLine+=line[j];
                
            }
            break;
        }
    }
    return newLine;
}