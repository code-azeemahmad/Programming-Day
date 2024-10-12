#include <iostream>
#include <cmath>
using namespace std;
double volumeinmeters(double l, double w, double h);
int main()
{
    double l, w, h;
    string unit;
    cout << "Enter the Lenth of Pyramid (in meters): ";
    cin >> l;
    cout << "Enter the Width of Pyramid (in meters): ";
    cin >> w;
    cout << "Enter the Height of Pyramid (in meters): ";
    cin >> h;
    cout << "Enter the Desired Unit (millimeters , centimeters , kilometers , meters): ";
    cin >> unit;
    if (unit=="meters")
    {
        double meter=volumeinmeters(l, w, h);
        cout<<"The Volume of the Pyramid is: " <<meter<<" cubic meters";
    }
    if (unit == "millimeters")
    {
        double milli = volumeinmeters(l, w, h);
        double millim = milli*1000000000;
        cout<<"The Volume of the Pyramid is: " <<millim <<" cubic millimeters";
    }
    if (unit== "kilometers")
    {
        double kilo=volumeinmeters(l, w, h);
        double kilom=kilo/1000000000;
        cout<<"The Volume of the Pyramid is: " <<kilom <<" cubic kilometers";
    }
    if (unit== "centimeters")
    {
        double centi=volumeinmeters(l, w, h);
        double centim=centi*1000000;
        cout<<"The Volume of the Pyramid is: " <<centim <<" cubic centimeters";
    }
}
double volumeinmeters(double l, double w, double h)
{
    double vol = (l * w * h)/3;
    return vol;
}