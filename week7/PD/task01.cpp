#include<iostream>
using namespace std;
main()
{
    //function that print  * in specific shape
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    for(int r=1; r<=rows; r=r+1)
    {
        for(int n=rows; n>=r; n=n-1)
        {
            cout << "*" ;
        }
        cout << endl;
    }
}