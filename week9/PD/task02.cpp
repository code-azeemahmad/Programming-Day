#include<iostream>
using namespace std;

//function
float checkPrice(string movies[],string movieName);
main()
{
    string movieName;
    float totalPrice=0;
    string movies[5]={"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    cout << "Enter movie name: ";
    cin >> movieName;//movie name enterd by user
    totalPrice=checkPrice(movies, movieName);//calculate discount
    cout << "Total Price after discount is: $" << totalPrice;   
}
//function that calculate discount on specific criteria
float checkPrice(string movies[],string movieName)
{
    float totalPrice=500;
    for(int i=0; i<5; i++)//loop execute 5 times
    {
        if(movieName==movies[i])
        {
            if((i+1)%2==1)//if movie name at odd index then 5% discount
            {
                totalPrice=totalPrice-(500*0.05);
                return totalPrice;
            }
            else//if movie name at even index then 10% discount
            {
                totalPrice=totalPrice-(500*0.10);
                return totalPrice;
            }
        }
    }
    cout << "movie not found";
}