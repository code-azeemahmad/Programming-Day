#include<iostream>
#include<fstream>
using namespace std;
int calculateCharacters();
int characters(string sentence);
main()
{
    cout << "Total number of characters: " << calculateCharacters();
}
int calculateCharacters()
{
    int sum=0, lineCharacter;
    string sentence;
    fstream file;
    file.open("task02.txt", ios::in);
    while(!file.eof())
    {
        getline(file, sentence);//get line with space
        lineCharacter=characters(sentence);//find character
        sum=sum+lineCharacter;//add result return by function 
    }//total number of characters in line
    return sum;
}
int characters(string sentence)
{
    int count=0;
    int length=sentence.length();//find length
    for(int i=0; i<length; i++)
    {
        count += 1;//count characters
    }
    return count;
}