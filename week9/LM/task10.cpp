#include<iostream>
using namespace std;
main()
{
    string argument;
    string word="something", newstring;
    cout << "Enter the argument 'a': ";
    getline(cin, argument);//store a complete sentence mean with space
    newstring=word+" "+argument;
    cout << "Result: " << newstring;
    
    // main reason to use getline is to store space
    // use cin.ignore(); before use getline(cin, variableName);
}