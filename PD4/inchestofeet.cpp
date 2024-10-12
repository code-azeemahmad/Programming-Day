#include <iostream>
using namespace std;
float foot(float feet);
float inch, convert, feet;                            /*A double provides higher precision than a float.
                                                      It typically uses 64 bits of memory and can store
                                                      up to 15–16 decimal digits of precision, while float
                                                      typically uses 32 bits and can store about 6–7 digits of precision.
                                                      If you're dealing with operations that require high accuracy,
                                                      such as scientific calculations, financial data, or when the
                                                      number has a large range or many decimal places, double is preferred.*/
main()
{
    cout << "Enter the measurement in inches:  ";
    cin >> inch;
    convert = foot(feet);        //you can also write convert=foot(inch);
    cout << "Equivalent in feet: " << convert;
}
float foot(float feet)
{
    feet = inch / 12;
    return feet;
}
