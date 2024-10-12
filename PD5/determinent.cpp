#include<bits/stdc++.h>
using namespace std;

int a, b, c;
float determinant, determinant1, determinant2,determinant3, determinant4;

float answer;
int main()
{
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    float nature;
    nature=pow(b,2)-4*a*c;
    if (nature==0)                                               //complex<double>determinant4=complex<double>(-b, 0) / (2.0 * a)-complex<double> (0, sqrt(-nature)) / (2.0 * a);
    {
        determinant=-(b/2)*a ;
        cout<<"Solution: x = " <<determinant;
    }
    if (nature>0)
    {
        determinant1=(-b+sqrt(b*b-4*a*c))/2*a;
        determinant2=(-b-sqrt(b*b-4*a*c))/2*a;
        cout<<"Solutions: x = " << determinant1 <<" and " << determinant2;
    }
    if (nature<0)
    {
        complex<double>determinant3=complex<double>(-b, 0) / (2.0 * a)+complex<double> (0, sqrt(-nature)) / (2.0 * a);
        complex<double>determinant4=complex<double>(-b, 0) / (2.0 * a)-complex<double> (0, sqrt(-nature)) / (2.0 * a);
        cout<<"Complex Solutions: x = " << determinant3 <<" and " << determinant4;
    }

}