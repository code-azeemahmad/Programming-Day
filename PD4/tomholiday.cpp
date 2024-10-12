#include <iostream>
#include <cmath>
using namespace std;
int pet(int holidaystime);
int tom(int workingdays, int workingtime);
int holiday, workingdays, workingtime, holidaystime;
float totaltimeforplay;
int main()
{
    cout << "Number of Holidays: ";
    cin >> holiday;
    totaltimeforplay = pet(holidaystime) + tom(workingdays, workingtime);
    int const norm = 30000;
    int diff;
    diff = abs(norm - totaltimeforplay); /*Purpose: abs() is a function that returns the absolute value of a number.
                                         Absolute value: The absolute value of a number is its non-negative value,
                                         regardless of whether it’s positive or negative.
                                         For example, the absolute value of both -5 and 5 is 5.
                                         In C++, abs() is part of the <cmath> library for floating-point numbers
                                         and integers. It ensures that we work with positive differences,
                                         which is useful when calculating how far a value is from some reference.*/

    if (totaltimeforplay <= 30000)
    {
        cout << "Tom sleeps well" << endl;
        cout << diff << " minutes less for play";
    }
    else /*The const keyword is used to define constants, which are variables whose
          value cannot be modified after they are initialized.
          Using const makes your code more robust and readable by clearly indicating
          that a certain value is not meant to change. This is useful for setting
          constant values like the number of days in a year or a threshold value that
          should not change.**/
    {
        cout << "Tom will run away" << endl;
        cout << diff << " minutes for play";
    }
}

int pet(int holidaystime)
{
    holidaystime = holiday * 127;
    return holidaystime;
}

int tom(int workingdays, int workingtime)
{
    workingdays = 365 - holiday;
    workingtime = workingdays * 63;
    return workingtime;
}
