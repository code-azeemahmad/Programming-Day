#include<iostream>
using namespace std;
float totalincome(int n, int m, string type);
int main()
{
    int n, m;
    string type;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>type;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;
    float answer;
    answer=totalincome(n, m, type);
    cout<<answer << " EUR" ;

}


float totalincome(int n, int m, string type)
{
    float result;
    if (type=="Premiere")
    {
        result=n*m*12.00;
    }
    else if (type=="Normal")
    {
        result=n*m*7.5;
    }
    else if (type=="Discount")
    {
        result=n*m*5.00;
    }

    return result;

}