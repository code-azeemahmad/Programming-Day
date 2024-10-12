#include <iostream>
using namespace std;
float func(char shape, float value);
int main()
{
    char shape;
    float value, result;
    cout << "Enter the nshape ( s for square, t for triangle, c for circle, h for hexagon) = ";
    cin >> shape;
    cout << "Enter the value = ";
    cin >> value;
    result = func(shape, value);
    cout << "The perimeter is = " << result;
}

float func(char shape, float value)
{
    float perimeter;
    if (shape == 's')
    {
        perimeter = value * 4;
    }
    if (shape == 't')
    {
        perimeter = value * 4;
    }
    if (shape == 'c')
    {
        perimeter = value * 6.28;
    }
    if (shape == 'h')
    {
        perimeter = value * 6;
    }
    return perimeter;
}
