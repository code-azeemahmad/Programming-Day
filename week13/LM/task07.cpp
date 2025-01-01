#include<iostream>
#include<fstream>
using namespace std;
void displayWords(string fileName);
main()
{
    string fileName="task07.txt";
    displayWords(fileName);
}
void displayWords(string fileName)
{
    int i=0, count=0;
    string line, word="";
    fstream file;
    file.open(fileName, ios::in);
    while(!file.eof())//until last line
    {
        getline(file, line);
        while(line[i]!='\0')//until last character
        {
            if(line[i]!=' ')
            {
                count += 1;
                word = word + line[i];
            }
            else//if space then
            {
                if(count < 4)//if word length < 4
                {
                    cout << " " << word << " ";//then print
                    
                }
                count = 0;
                word="";//reset
            }
            i += 1;
        }
        if(count < 4)
        {
            cout << word;
        }
        word = "";//reset
        count = 0;
        i = 0;
    }
    file.close();
}