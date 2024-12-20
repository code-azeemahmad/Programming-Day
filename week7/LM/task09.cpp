#include<iostream>
using namespace std;
int calculatePrice(int money, int year);
main()
{
    int money, year, sum, moneyLeft;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter year: ";
    cin >> year;
    sum=calculatePrice(money, year);
    
    if(sum<money)
    {
        moneyLeft=money-sum;
        cout << "Yes! He will live a carefree life and will have " << moneyLeft << " dollars left." ;
    }
    if(sum>money)
    {
        moneyLeft=sum-money;
        cout << "He will need " << moneyLeft << " dollars to survive." ;
    }
}
// function that calculate whether the money is enough to live based on specific criteria
int calculatePrice(int money, int year)
{
    int sum,difference, evenYearMoney=0, oddYearMoney=0, age=18;
    for(int i=1800; i<=year; i++)
    {

        if(i%2==0)
        {
            evenYearMoney=evenYearMoney+12000;// statement executed when year is even
        }
        if(i%2==1)
        {
            oddYearMoney=oddYearMoney+12000+(50*age);// statemetn executed when year is odd
        }
        age=age+1;
    }
    sum=evenYearMoney+oddYearMoney;
    return sum;
}