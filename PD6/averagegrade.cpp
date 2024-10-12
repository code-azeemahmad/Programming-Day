#include <iostream>
#include <sstream>
#include <string>
using namespace std;
float calculate_average(float english, float maths, float chemistry, float socialscience, float biology);
string calculate_grade();
float english, maths, chemistry, socialscience, biology;
int main()
{
    float percentage;
    string grade;
    string name;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> english;
    cout << "Enter marks for Maths: ";
    cin >> maths;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;
    cout << "Enter marks for Socialscience: ";
    cin >> socialscience;
    cout << "Enter marks for Biology: ";
    cin >> biology;
    cout << "Student Name: " << name << endl;
    percentage = calculate_average(english, maths, chemistry, socialscience, biology);
    cout << "Percentage: " << percentage << "%" << endl;
    grade = calculate_grade();
    cout << "Grade: " << grade;
}

float calculate_average(float english, float maths, float chemistry, float socialscience, float biology)
{
    float sum = english + maths + chemistry + socialscience + biology;
    float average = (sum / 500) * 100;
    return average;
}

string calculate_grade()
{
    float arg = calculate_average(english, maths, chemistry, socialscience, biology);
    stringstream decision;
    if (arg < 40)
    {
        decision << "F";
    }
    else if (arg >= 40 && arg < 50)
    {
        decision << "D";
    }
    else if (arg >= 50 && arg < 60)
    {
        decision << "C";
    }
    else if (arg >= 60 && arg < 70)
    {
        decision << "B";
    }
    else if (arg >= 70 && arg < 80)
    {
        decision << "B+";
    }
    else if (arg >= 80 && arg < 90)
    {
        decision << "A";
    }
    else if (arg >= 90 && arg <= 100)
    {
        decision << "A+";
    }

    return decision.str();
}
