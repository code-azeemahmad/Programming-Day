#include<iostream>
using namespace std;
bool checkCharacters(string arr[]);
main()
{
    string arr[4];
    cout << "Enter elements: ";
    
    for(int i=0; i<4; i++)
    {
        cin >> arr[i];//store elements entered by user
        
    }
    cout << checkCharacters(arr);
}
bool checkCharacters(string arr[])
{
    string word=arr[0], word1=arr[1], word2=arr[2], word3=arr[3];
    int wordLength;
    bool isSame=true;
    for(int i=0; i<4; i++)
    {
        word=arr[i];//store element at particular index in array will store in word
        wordLength=word.length();//find that element length
        if(wordLength==arr[1].length() && wordLength==arr[2].length() && wordLength==arr[3].length())
        {
            for(int j=0; j<wordLength; j++)//check whether all elements of same length and also same w.r.t text
            {
                if(word[j]==word1[j] && word1[j]==word2[j] && word2[j]==word3[j])//same characters at index
                {
                    isSame=true;
                }
                else
                {
                    return false;//if each character doesn't match
                }
            }
        }
        else
        {
            isSame=false;
        }
    }
    return isSame;
}
