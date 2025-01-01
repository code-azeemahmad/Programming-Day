#include<iostream>
using namespace std;

int checkCharacter(string arr[],int length,char character);
int checkLength(string word);

main()
{
    char character;
    int length;
    cout << "Enter how many words you want to Enter: ";
    cin >> length;
    string arr[length];
    
    for(int i=0; i<length; i++)
    {
        cout << "Enter word " << i+1 << ": ";//enter data will store in array
        cin >> arr[i];
    }
    cout << "Enter the letter you want to count: ";
    cin >> character;
    cout << checkCharacter(arr, length, character);
}
int checkCharacter(string arr[],int length,char character)
{
    int wordLength, count=0;
    string word;
    for(int i=0; i<length; i++)
    {
        word=arr[i];
        wordLength=checkLength(word);
        for(int j=0; j<wordLength; j++)
        {
            if(word[j]==character)//if word[j] is equal to entered character then count ++
            {//entered character is from user 
                count += 1;//calculate how many times entered character is in sentence
            }
        }
    }
    return count;
}
int checkLength(string word)
{
    int count=0, i=0;
    while(word[i] != '\0')//till last elemene
    {
        count += 1;//this is used to count characters and i for while loop
        i += 1;//always use varaible for single purpose
    }
    // cout << count;
    return count;
}