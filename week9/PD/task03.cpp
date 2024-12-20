#include<iostream>
using namespace std;
string checkCharacters(string word);
main()
{
    string word;
    
    cout << "Enter a string: ";
    cin >> word;
    cout << checkCharacters(word);
}
//function that check whether string has even length or odd
string checkCharacters(string word)
{
    int stringLength=word.length();
    if(stringLength%2==0)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}