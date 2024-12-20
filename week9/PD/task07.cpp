#include<iostream>
using namespace std;

void checkSimilarity(string word1,string word2);

main()
{
    string word1, word2;//word1 --> string1 && word2 -->string2
    cout << "Enter string1: ";
    cin >> word1;
    cout << "Enter string2: ";
    cin >> word2;
    checkSimilarity(word1, word2);
}
void checkSimilarity(string word1,string word2)
{
    char character='.', sameCharacter;
    // character declare for get character of string 1 to check with all characters of string2
    int length1, length2, c1=0, c2=0, totalCharacters=0;
    // c1 refers how many times a character in string1
    // c2 refers how many times a character in string2 
    length1=word1.length();
    length2=word2.length();// find length of both strings
    for(int i=0; i<length1; i++)
    {
        if(character==word1[i])
        {
            continue;//if first time in string 1 'a' found then it will not detect in other iteration again 'a' if there found.
        }
        character=word1[i];
        for(int i=0; i<length1; i++)
        {
            if(character==word1[i])// found 'a' how many times in word1
            {
                c1++;
            }
        }
        for(int j=0; j<length2; j++)
        {
            if(character==word2[j])// found 'a' how many times in word2
            {
                c2++;
                sameCharacter=word2[j];
            }
        }
        if(c1>0 && c2>0)
        {
            if(c1>c2)//if 'a' in word1 is greater mean a in word1 is greater times than in word2. Then print c2;
            {
                cout << c2 << " times " << sameCharacter;
                totalCharacters=totalCharacters+c2;
            }
            else if(c2>c1)
            {
                cout << c1 << " times " << sameCharacter;
                totalCharacters=totalCharacters+c1;
            }
            else
            {
                cout << c1 << " times " << sameCharacter;
                totalCharacters=totalCharacters+c1;
            }
        }

        
        c1=0;// again c1 and c2 become 0 to use again in next iteration
        c2=0;
    }
    cout << endl << "Total Times: " << totalCharacters;// total characters repeated in both string
    // e.g., aabcc and adcaa now total characters=3 because 'a' 2 times and 'c' 1 time
}