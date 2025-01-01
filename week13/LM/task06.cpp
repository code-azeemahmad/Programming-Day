#include<iostream>
#include<fstream>
using namespace std;
int countLines(string fileName);
int checkLine(string sentence);
main()
{
    char character;
    string fileName="task06.txt";
    cout << "Total number of lines: " << 15-countLines(fileName);
}//when result come then will subtract from 15
int countLines(string fileName)
{
    int count=0;
    string sentence;
    char character;
    fstream file;
    file.open(fileName, ios::in);
    file >> character;
    while(!file.eof())
    {
        getline(file, sentence);
        if(sentence[0]==character)
        {//we save first character of file, then compare which line start from that.
            count += 1;//and count if start from that character
        }
    }
    return count;
}
