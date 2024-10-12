#include<iostream>
using namespace std;
main()
{
float vegetable,fruit;
int vegperkg,fruitperkg;
cout<<"Enter vegetable price per kg(in coins): ";
cin>>vegetable;
cout<<"Enter fruit price per kg(in coins): ";
cin>>fruit;
cout<<"Enter total kg of vegetables: ";
cin>>vegperkg;
cout<<"Enter total kg of fruits: ";
cin>>fruitperkg;
float sum1;                   //HARVEST VEGETABLES
sum1=vegetable*vegperkg;
cout<<"Total Price of " <<vegperkg;
cout<<" kg vegetables: " <<sum1 <<endl;
float sum2;
sum2=fruit*fruitperkg;
cout<<"Total Price of " <<fruitperkg;
cout<<" kg fruits: " <<sum2 <<endl;
float sumc;
sumc=sum1+sum2;
cout<<"Total Earnings in Coins: " <<sumc<<endl;
int sumr;
sumr=sumc/1.94;
cout<<"Total Earnings in Rupees(rps): " <<sumr;

}