#include<iostream>
using namespace std;
void removeVowel(string word, int length);
int checkLength(string word);
main()
{
    string word;
    int length;
    cout << "Enter a string: ";
    getline(cin, word);
    length=checkLength(word);//function that check length of string also we can use name.length();
    removeVowel(word, length);//function that will remove vowels from array
}
void removeVowel(string word, int length)
{
    cout << "String with vowels removed: ";
    for(int i=0; i<length; i++)
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U')
        {
            continue;//if vowels then leave that iteration
        }
        else{
            cout << word[i];
        }
    }
}
int checkLength(string word)
{
    int i, length=0;
    for(i=1; word[i]; i++)//word[i] mean if at that index character is place then add
    {
        length=length+1;
    }
    return length;// it is best to use variable for only one work
    // we can use i but not
}