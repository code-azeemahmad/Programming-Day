#include <iostream>
using namespace std;
int roses();
int jasmines();
int tulips();
float r, j, t;
float rose, jasmine, tulip;
int main()
{
    cout << "Enter the number of Roses: ";
    cin >> r;
    cout << "Enter the number of Jasmines: ";
    cin >> j;
    cout << "Enter the number of Tulips: ";
    cin >> t;
    rose = roses();
    jasmine = jasmines();
    tulip = tulips();
    float price = rose + jasmine + tulip;
    cout << "Original Price: $" << price << endl;
    if (price >= 200)
    {
        float discount;
        discount = price - (0.2 * price); // 20% discount above $200 price
        cout << "Price after discount: $" << discount;
    }
    else
    {
        cout << "No discount applied.";
    }
}

int roses()
{
    float total1 = r * 2;
    return total1;
    // 1 rose = $2
}

int jasmines()
{
    float total2 = j * 4.1;
    return total2;
    // 1 jasmine = $4.1
}

int tulips()
{
    float total3 = t * 2.5;
    return total3;
    // 1 tulip = $2.5
}