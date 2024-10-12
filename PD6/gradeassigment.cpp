#include<iostream>
#include<sstream>
#include<string>
using namespace std;
string gradecalculation(int marks);
int main()
{
    int marks;
    string result;
    cout<<"Enter student's marks: ";
    cin>>marks;
    result = gradecalculation(marks);
    cout<< "Grade: " << result;

}

string gradecalculation(int marks)
{
    stringstream grade;
    if (marks>85)
    {
        grade << "A";
    }
    if (marks>=81 && marks<=85)
    {
        grade << "B";
    }
    if (marks>=71 && marks<=80)
    {
        grade << "C";
    }
    if (marks>=61 && marks<=70)
    {
        grade << "D";
    }
    if (marks>=50 && marks<=60)
    {
        grade << "E";
    }
    if (marks<50)
    {
        grade << "F";
    }
    return grade.str();
}



/*                        RETURNING CHARACTER

#include<iostream>
using namespace std;
char gradecalculation(int marks);
int main()
{
    int marks;
    char result;
    cout<<"Enter student's marks: ";
    cin>>marks;
    result = gradecalculation(marks);
    cout<< "Grade: " << result;

}

char gradecalculation(int marks)
{
    char grade;
    if (marks>85)
    {
        grade = 'A';
    }
    if (marks>=81 && marks<=85)
    {
        grade = 'B';
    }
    if (marks>=71 && marks<=80)
    {
        grade = 'C';
    }
    if (marks>=61 && marks<=70)
    {
        grade = 'D';
    }
    if (marks>=50 && marks<=60)
    {
        grade = 'E';
    }
    if (marks<50)
    {
        grade = 'F';
    }
    return grade;
}

*/