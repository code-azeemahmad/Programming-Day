#include<iostream>
using namespace std;
int tissuepaperchecker(int people,int tp);
int people, tp;
int const days=14,sheets=500,usedperday=57;
int main()
{
    cout<<"Number of people in the household: ";
    cin>>people;
    cout<<"Number of Rolls of Tissue Paper: ";
    cin>>tp;
    int last=tissuepaperchecker(people,tp);
    if (last>days)
    {
        cout<<"Your Tissue Paper will last " << last <<" days, no need to panic!";
    }
    else
    {
        cout<<"Your Tissue Paper will only last " << last <<" days, buy more!";

    }





}
int tissuepaperchecker(int people,int tp)
{
    int peopleuse=people*usedperday;
    int totalsheets=tp*sheets;
    int daysleft=totalsheets/peopleuse;
    return daysleft;
}