#include <iostream>
using namespace std;
float fuelneed(float dist);
float distances;
int main()
{
    float dist;
    float fuelused;
    cout << "Enter the distance: ";
    cin >> distances;
    fuelused = fuelneed(dist);
    cout << "Fuel needed: " << fuelused;
}
float fuelneed(float dist)
{
    // fuel used is 10 times the distance covered
    dist = distances * 10;
    return dist;
}