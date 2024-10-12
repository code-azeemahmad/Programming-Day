#include <iostream>
using namespace std;
float minimum(float number1, float number2);
int main()
{
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    float min = minimum(num1, num2);
    cout << "The minimum of " << num1 << " and " << num2 << " is: " << min;
    return 0;
}
float minimum(float number1, float number2)
{
    if (number1>number2)
    {
        return number2;
    }
    else 
    {
        return number1;
    }
}