#include<iostream>
#include<iomanip>
using namespace std;
float checkPercentage(float number, float numberCount);

float i=0, p1=0, p2=0, p3=0, p4=0, p5=0;
float p1Percentage, p2Percentage, p3Percentage, p4Percentage, p5Percentage;

main()
{
    float numberCount, number;
    cout << "Enter numbers count: ";
    cin >> numberCount;
    for(int i=1; i<=numberCount; i++)// cout statement run on the  basis of numberCount
    {
        cout << "Enter a number: ";
        cin >> number;
        checkPercentage(number, numberCount);
    }    
}
/*function that check number is fall in whick category and then add in that category when 
all numbers are checked then it calculate percentage of different categories based on sum*/
float checkPercentage(float number, float numberCount)
{
    
    if(number>0 && number<200)
    {
        p1++;
        p1Percentage=(p1/numberCount)*100;
    }
    if(number>=200 && number<400)
    {
        p2++;
        p2Percentage=(p2/numberCount)*100;
    }
    if(number>=400 && number<600)
    {
        p3++;
        p3Percentage=(p3/numberCount)*100;
    }
    if(number>=600 && number<800)
    {
        p4++;
        p4Percentage=(p4/numberCount)*100;
    }
    if(number>=800 )
    {
        p5++;
        p5Percentage=(p5/numberCount)*100;
    }  
    i++;
    if(i==numberCount)//number count is equal to digits
    {
        cout << fixed << setprecision(2) << p1Percentage << endl;
        cout << fixed << setprecision(2) << p2Percentage << endl;
        cout << fixed << setprecision(2) << p3Percentage << endl;
        cout << fixed << setprecision(2) << p4Percentage << endl;
        cout << fixed << setprecision(2) << p5Percentage << endl;
    }
}