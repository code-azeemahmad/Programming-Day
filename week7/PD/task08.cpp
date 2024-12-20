#include<iostream>
#include<iomanip>
using namespace std;
int percentageCargo(int tonnage,int cargoCount);
int i=0, p1=0, p2=0, p3=0;
float sum=0, average, average1=0, average2=0, average3=0, tonnagePercentage1=0, tonnagePercentage2=0, tonnagePercentage3=0;
main()
{
    int cargoCount, tonnage;
    cout << "Enter the count of cargo for transportation: ";
    cin >> cargoCount;
    for(int i=1; i<=cargoCount; i++)
    {
        cout << "Enter the tonnage of cargo " << i << ":";
        cin >> tonnage;
        
        percentageCargo(tonnage, cargoCount);
        
    }
}
// funtion that calculate percentage cargo 
// every time the tonnage pass to function and check in which category it is fall and add 1
// and after, calculate percentage on basis of count
int percentageCargo(int tonnage, int cargoCount)
{
    
    if(tonnage<=3)
    {
        tonnagePercentage1=tonnage*200;
        p1=p1+tonnage;
    }
    else if(tonnage>3 && tonnage<=11)
    {
        tonnagePercentage2=tonnage*175;
        p2=p2+tonnage;
    }
    else if(tonnage>11)
    {
        tonnagePercentage3=tonnage*120;
        p3=p3+tonnage;
    }
    i++;
    sum=sum+tonnage;
    if(i==cargoCount)
    {
        
        average1=(p1/sum)*100;
        average2=(p2/sum)*100;
        average3=(p3/sum)*100;
        average=((p1*200)+(p2*175)+(p3*120))/sum; //after calculating percentage, get average
        cout << fixed << setprecision(2) << average << endl;
        cout << fixed << setprecision(2) << average1 << "%" << endl;
        cout << fixed << setprecision(2) << average2 << "%" << endl;
        cout << fixed << setprecision(2) << average3 << "%" ;
    }
}