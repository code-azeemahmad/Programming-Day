#include <iostream>
using namespace std;
int findgreatest(int num1, int num2, int num3);
int main()
{
    int num1, num2, num3, greatest;
    cout << "Enter the first number = ";
    cin >> num1;
    cout << "Enter the second number = ";
    cin >> num2;
    cout << "Enter the third number = ";
    cin >> num3;
    greatest = findgreatest(num1, num2, num3);

    cout << "The greatest among " << num1 << ", " << num2 << ", and " << num3 << " is = " << greatest;
}

int findgreatest(int num1, int num2, int num3)
{
    int great;
    if (num1 > num2 && num1 > num3)
    {
        great = num1;
    }
    if (num2 > num1 && num2 > num3)
    {
        great = num2;
    }
    if (num3 > num2 && num3 > num1)
    {
        great = num3;
    }
    return great;
}
