#include<iostream>
using namespace std;
void checkLocation(string word);
main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    checkLocation(word);
}
//function that reverse string e.g., hello --> olleh
void checkLocation(string word)
{
    int x;
    char character[x];// character array store characters of string
    for(x=0; word[x] ; x++)//loop execute until the characters in string finish
    {
        character[x]=word[x];
        
    }
    cout << "reversed string: " ;
    for(int i=x; i>=0; i--)// loop execute from end like from e.g., 5 then it print in reverse order
    {
        cout << character[i];
    }
    
}