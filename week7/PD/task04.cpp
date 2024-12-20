#include<iostream>
using namespace std;
main()
{
    int triangles, n1=0, n2, sum=0;
    cout << "Enter number of Triangle: ";
    cin >> triangles;
    // function that calculate dots in triangle based on rows
    for(int i=1; i<=triangles; i=i+1)
    {
        n1=n1+1;
        sum=sum+n1;
    }
    cout << "Dots in the Triangle: " << sum;
}