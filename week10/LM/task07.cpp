#include<iostream>
using namespace std;

int calculateLength(string sentence, int &count);
void reverseString(string sentence, int length, int count, string arr[]);

main()
{
    int length, count=0;
    string arr[32];
    string sentence;
    cout << "Enter string: ";
    getline(cin, sentence);//store space
    length=calculateLength(sentence, count);
    reverseString(sentence, length, count, arr);
    for(int i=count-1; i>=0; i--)
    {
        cout << arr[i];
        if(i>0)//till 2nd last element
        {
            cout << " ";
        }
    }
    
}
void reverseString(string sentence, int length, int count, string arr[])
{
    int j=0;
    string word="";
    for(int i=0; i<=length; i++)//for count last word i<=length
    {
        if(sentence[i]!=' ')
        {
            word += sentence[i];
        }
        else 
        {
            arr[j]=word;//newarr
            word="";
            j++;
        }
    }
    arr[j]=word;
}
int calculateLength(string sentence, int &count)
{
    int i=0;
    while(sentence[i]!='\0')//till last element
    {
        if(sentence[i]==' ')//ifspace then count ++ for future use to calculate words
        {
            count += 1;
        }
        i += 1;
    }
    count += 1;
    return i;
}