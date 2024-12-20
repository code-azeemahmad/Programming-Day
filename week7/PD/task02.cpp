#include<iostream>
using namespace std;
main()
{
    int rows, rowNumber, g=0, h=0, u=rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    int p=rows-1;
    for(int i=1; i<=rows; i++)
    {
        for(int a=p; a>=0; a--)//i,j and p,q and a,b and g,h are variable's names 
        {
            cout << " ";
        }
        p--;// every time p's value is -1 and on the other hand g's value is +1
        for(int b=0; b<=g; b++)
        {
            cout << "*";
        }
        g++;
        cout << endl;
    }
    int q=rows-1;
    for(int j=1; j<=rows; j++)
    {
        for(int a=0; a<=h; a++)
        {
            cout << " ";
        }
        h++;// h value increase which is used to print space
        for(int b=q; b>=0; b--)
        {
            cout << "*";
        }
        q--;// q value decrease which is used to print *
        
        cout << endl;
    }
    
}
