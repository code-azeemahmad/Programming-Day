#include<iostream>
#include<fstream>
using namespace std;
void read(string &line);
void append(string line);
main()
{
    string line;
    read(line);
    append(line);
}
void append(string line)
{
    bool is=false;
    int ascii=97;
    fstream file;
    file.open("task02.txt", ios::app);
    file << endl;
    for(int i=0; i<26; i++)
    {
        char character=ascii;
        for(int j=0; j<line.length(); j++)//until length
        {
            
            if(character==line[j])//if character found
            {
                is=true;
                break;
                
            }
        }
        if(is==false)
        {
            file << character;//only if character is not in file
            
        }
        is=false;
        ascii++;
    }
    file.close();
}
void read(string &line)
{
    fstream file;
    file.open("task02.txt", ios::in);
    file >> line;//read word
    file.close();
}