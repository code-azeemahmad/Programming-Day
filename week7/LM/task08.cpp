#include<iostream>
using namespace std;

int calculateMoney(int age, int washingMachinePrice, int toyUnitPrice);

main()
{
    int age, washingMachinePrice, toyUnitPrice, sum;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> washingMachinePrice;
    cout << "Enter the unit price of each day: ";
    cin >> toyUnitPrice;
    sum=calculateMoney(age, washingMachinePrice, toyUnitPrice);
    if(sum<washingMachinePrice)
    {
        sum=washingMachinePrice-sum;
        cout << "NO!" << endl;
        cout << sum;
    }
    else if(sum>washingMachinePrice)
    {
        sum=sum-washingMachinePrice;
        cout << "Yes!" << endl;
        cout << sum;
    }
    else{
        cout << "Yes!";
    }
}
// function that calculate money is enough to buy a washing machine on the basis of given criteria
int calculateMoney(int age, int washingMachinePrice, int toyUnitPrice)
{
    int sum=0,brotherMoney=0, birthdayMoney=0, money=0, toy=0, toyPrice;
    for(int i = 1; i <= age; i++)
    {
        if(i % 2 == 0)
        {
            money = money+10;
            birthdayMoney = birthdayMoney+money;
            brotherMoney =brotherMoney+1;
        }
        else
        {
            toy = toy+1;
        }
    }
    toyPrice=toy*toyUnitPrice;
    sum=toyPrice+birthdayMoney-brotherMoney;
    return sum;    
}