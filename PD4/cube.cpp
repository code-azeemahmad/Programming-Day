#include<iostream>
#include<cmath>
int howmanystickers(int m,int n);
using namespace std;
int main()
{
    int n,m,result;
    cout<<"Enter the side lenths of Rubiks cube: ";
    cin>>n;
    
    if (n<7)
    {
        result=howmanystickers(m,n);
        cout<<"Number of stickers needed: " << result;
    }
    else
    {
        cout<<"Invalid";
    }
   
}
int howmanystickers(int m,int n)
{
    //number of sides of cube = 6        //#include<cmath>
    m=(n*n)*6;                           // Using pow() to square the number
                                         //m = pow(n,2);
    return m;
    
}