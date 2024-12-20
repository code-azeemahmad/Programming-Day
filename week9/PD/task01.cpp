#include<iostream>
using namespace std;

//function
int checkFruitPrice(string fruit[],int price[],string fruitName,int quantity);

main()
{
    string fruitName;
    int quantity, totalPrice;
    string fruit[4]={"peach", "apple", "guava", "watermelon"};
    int price[4]={60, 70, 40, 30};
    cout << "Enter fruit name: ";
    cin >> fruitName;
    cout << "Enter quantity(kgs): ";
    cin >> quantity;
    totalPrice=checkFruitPrice(fruit, price, fruitName, quantity);
    cout << "Total Price: $" << totalPrice;
}
//print total price 
//if fruit apple then at corresponding index of second array will be price of apple
//fetch that price and multiply with quantity
int checkFruitPrice(string fruit[4],int price[4],string fruitName,int quantity)
{
    int totalPrice=0;
    int i;
    for(i=0; i<4; i++)
    {

        if(fruitName==fruit[i])
        {
            
            int unit=price[i];//fetch price and store in new varaible
            totalPrice=unit*quantity;
            return totalPrice;
        }
        
    }
    cout << "Fruit NOt found";
}