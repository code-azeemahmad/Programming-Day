#include<iostream>
using namespace std;
void checkWord(string word);
main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    checkWord(word);
}
//function that print next character e.g., A --> B in string
void checkWord(string word)
{
    int x, A;
    char a, b;//a store specific character of string
    // b store character after increase ASCII code
    char character[x];
    cout << "Shifted String: ";
    for(x=0; word[x] ; x++)
    {
        a=word[x];// a store character
        int A=a;// A store ASCII of that character store in a
        if(A==32)// if space 
        {
            A--;
        }
        if(A==90)// if Z then print A
        {
            A=64;
        }
        if(A==122)//if z then print a
        {
            A=96;
        }
        A++;// increase ASCII code e.g., 65 --> 66
        b=A; // store ASCII as character
        cout << b;
    }
}