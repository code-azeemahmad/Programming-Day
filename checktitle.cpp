#include<iostream>
#include<sstream>
using namespace std;
string checktitle(int age, char gender);
int age;
char gender;
int main()
{
    cout<<"Enter the age: ";
    cin>>age;
    cout<<"Enter the gender(m/f): ";
    cin>>gender;
    string answer;
    answer=checktitle(age, gender);
    cout<<answer;

}
string checktitle(int age, char gender)
{
    stringstream result;
    if (age<16 && gender=='m')
    {
        result << "Master";
    }
    else if (age>=16 && gender=='m')
    {
        result << "Mr.";
    }
    else if (age>=16 && gender=='f')
    {
        result << "Ms.";
    }
    else if (age<16 && gender=='f')
    {
        result << "Miss";
    }

    return result.str();


}