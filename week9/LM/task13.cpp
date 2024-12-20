#include<iostream>
using namespace std;
void newArr(string arr[], int chordLength);
int wordLength(string word);
main()
{
    int chordLength;
    
    cout << "Enter the number of chords: ";
    cin >> chordLength;
    cout << "Enter " << chordLength << " chords, one per line: " << endl;
    string arr[chordLength];
    for(int i=0; i<chordLength; i++)
    {
        cin >> arr[i];//store elements in array as entered by user
    }
    newArr(arr, chordLength);//new array must have 7 in each element
}
void newArr(string arr[], int chordLength)
{
    string word;
    bool is7=false;
    int j, length;
    cout << "Jazzified chords: [" ;
    for(int i=0; i<chordLength; i++)
    {
        word=arr[i];//word at index[i] in array will assign to variable word
        length=wordLength(word);// find word length
        for(j=0; j<length; j++);
        {
            if(word[length-1]!='7')//length-1 because j start from 0
            {
                is7=false;
            }
            else{
                is7=true;
            }
            
        }
        if(is7==false)
        {
            arr[i]=arr[i]+"7";
            cout << arr[i];
        }
        else
        {
            cout << arr[i];
        }
        if(i<chordLength-1)// print , after each element
        {//chordLength-1 mean not print , after last element
            cout << ", ";
        }
    }
    cout << "]";
}
int wordLength(string word)
{
    int x;
    for(x=0; word[x]; x++)//find word length
    {

    }
    return x;
}