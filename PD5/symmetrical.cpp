#include<bits/stdc++.h>
using namespace std;
int issymmetrical(int number);
int num,number;
int main()
{
    cout<<"Enter a three-digit number: ";
    cin>>num;
    int tf=issymmetrical(number);
    cout<<tf;
}
int issymmetrical(int number)
{
    if (num/100==num%10)
    {

        number=1;

    }
    if (num/100!=num%10)
    {
        number=0;
    }
    return number;

}