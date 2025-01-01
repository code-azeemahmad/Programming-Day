#include<iostream>
using namespace std;
void encryption(string name);
main()
{
    string name;
    cout << "Enter string: ";
    getline(cin, name);
    encryption(name);
}
void encryption(string name)
{
    string newString="";//print morse code
    for(int i=0; i<name.length(); i++)
    {
        if(name[i]=='A' || name[i]=='a')
        newString+=".- ";
        else if(name[i]=='B' || name[i]=='b')
        newString+="-... ";
        else if(name[i]=='C' || name[i]=='c')
        newString+="-.-. ";
        else if(name[i]=='D' || name[i]=='d')
        newString+="-.. ";
        else if(name[i]=='E' || name[i]=='e')
        newString+=". ";
        else if(name[i]=='F' || name[i]=='f')
        newString+="..-. ";
        else if(name[i]=='G' || name[i]=='g')
        newString+="--. ";
        else if(name[i]=='H' || name[i]=='h')
        newString+=".... ";
        else if(name[i]=='I' || name[i]=='i')
        newString+=".. ";
        else if(name[i]=='J' || name[i]=='j')
        newString+=".--- ";
        else if(name[i]=='K' || name[i]=='k')
        newString+="-.- ";
        else if(name[i]=='L' || name[i]=='l')
        newString+=".-.. ";
        else if(name[i]=='M' || name[i]=='m')
        newString+="-- ";
        else if(name[i]=='N' || name[i]=='n')
        newString+="-. ";
        else if(name[i]=='O' || name[i]=='o')
        newString+="--- ";
        else if(name[i]=='P' || name[i]=='p')
        newString+=".--. ";
        else if(name[i]=='Q' || name[i]=='q')
        newString+="--.- ";
        else if(name[i]=='R' || name[i]=='r')
        newString+=".-. ";
        else if(name[i]=='S' || name[i]=='s')
        newString+="... ";
        else if(name[i]=='T' || name[i]=='t')
        newString+="- ";
        else if(name[i]=='U' || name[i]=='u')
        newString+="..- ";
        else if(name[i]=='V' || name[i]=='v')
        newString+="...- ";
        else if(name[i]=='W' || name[i]=='w')
        newString+=".-- ";
        else if(name[i]=='X' || name[i]=='x')
        newString+="-..- ";
        else if(name[i]=='Y' || name[i]=='y')
        newString+="-.-- ";
        else if(name[i]=='Z' || name[i]=='z')
        newString+="--.. ";
        else if(name[i]==' ')
        newString+="   ";
    }
    cout << "MorseCode: " << newString;
}