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
// function that check which character is at which position in a string;
void checkLocation(string word)
{
    int x;
    char character[x];// make array of characters of word store in string
    for(x=0; word[x] ; x++)//loop execute until the characters in string finish
    {
        character[x]=word[x];//word[x] character store in array at position character[x];
        cout << character[x] << " found on location " << x << endl;
    }
    
}