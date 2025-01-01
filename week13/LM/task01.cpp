#include<iostream>
#include<fstream>
using namespace std;
int countLines(string fileName);
main()
{
    string fileName;
    cout << "Total number of lines: " << countLines(fileName);
}
int countLines(string fileName)
{
    int count=0;
    fstream file;
    file.open("task01.txt", ios::in);
    while(!file.eof())//until last line
    {
        getline(file, fileName);//get line with space
        count += 1;//count lines
    }
    file.close();
    return count;
}