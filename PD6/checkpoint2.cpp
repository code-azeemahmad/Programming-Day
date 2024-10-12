#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string grade(int marks);
int main()
{
    string result;
    int marks;
    cout<<"Enter the students's marks: ";
    cin>>marks;
    result=grade(marks);
    cout << result;

}
string grade(int marks)
{
    stringstream answer;
    if (marks>80)
    {
        answer << "A+" ;   
    }
    if (marks>60 && marks<80)
    {
        answer << "A-";
    }
    if (marks<60)
    {
        answer << "Fail";
    }
    return answer.str();

}