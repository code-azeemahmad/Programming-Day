#include<iostream>
#include<fstream>
using namespace std;
int character(string fileName, char charac);
int calculateFrequency(string fileName);
main()
{
    string fileName;
    cout << "Total number of characters: " << calculateFrequency(fileName);//calculate frequency
}
int calculateFrequency(string fileName)
{
    int sum=0, lineCharacter;
    char charac;
    fstream file;
    file.open("task03.txt", ios::in);
    file >> charac;//single character that is top in file, and we need to find same characters in file
    while(!file.eof())
    {
        getline(file, fileName);//get line
        lineCharacter=character(fileName, charac);
        sum=sum+lineCharacter;
    }
    file.close();
    return sum;
}
int character(string fileName, char charac)
{
    int count=0;
    int length=fileName.length();
    for(int i=0; i<length; i++)
    {
        if(charac==fileName[i] || toupper(charac)==fileName[i])//toupper function will uppercase character
        {
            count += 1;//if find same character, then count
        }
    }
    return count;
}