#include<iostream>
using namespace std;
bool canPayWithChange(float change,float totalAmountNeed);
main()
{
    float change, totalAmountNeed;
    bool isPayable;
    string arr[4]={"quarters", "dimes", "nickels", "pennies"};
    //every word has its specific meaning
    int arrValue[4];
    for(int i=0; i<4; i++)
    {
        cout << "Enter " << arr[i] << ": ";
        cin >> arrValue[i];
    }
    change=(arrValue[0]*0.25)+(arrValue[1]*0.10)+(arrValue[2]*0.05)+(arrValue[3]*0.01);
    cout << "Enter the total amount due: $";
    cin >> totalAmountNeed;//total amount of item
    isPayable=canPayWithChange(change, totalAmountNeed);//calling function
    cout << "Can you pay the amount? ";
    if(isPayable==true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
// check whether has enough money to buy item or not
bool canPayWithChange(float change,float totalAmountNeed)
{
    bool isPayable=false;
    if(change>=totalAmountNeed)
    {
        isPayable=true;
    }
    return isPayable;
}