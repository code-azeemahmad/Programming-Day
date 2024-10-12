#include<bits/stdc++.h>
using namespace std; 
int check();
int number;  
int num,num1,num_2,num2,num_3,num3,num_4,num4,num_5,num5,re;                //12345
int main() 
{
    cout<<"Enter a five digit number: ";
    cin>>number;                                               
    num1=number/10000;
    num_2=number%10000;
    num2=num_2/1000;
    num_3=num_2%1000;
    num3=num_3/100;
    num_4=num_3%100;
    num4=num_4/10;
    num5=num_4%10;

    num=num1+num2+num3+num4+num5;
    re=check();
    
    
}

int check()
{
    if ((num/2)*2==num)
    {
        cout<<"Evenish";
    }
    else
    {
        cout<<"Oddish";
    }

}

