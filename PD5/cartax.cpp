#include<iostream>
using namespace std;
float taxcalculator(char type, float price, float taxrate);
int main()
{
    char type;
    float price,taxrate;
    char M, E, S, V, T;
    cout<<"Enter the vehicle type code: ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    if (type=='E')                 //The variable E is declared but not initialized. You should use character literals (e.g., 'E' instead of E).
    {                              //for string double quote and for char single quote
        taxrate=8;
        
        float taxe=taxcalculator(type,price,taxrate);
        float amounte=price+taxe;
        cout<<"The Final price of a vehicle of type " << type <<" after adding the tax is $" << amounte;
    }
    if (type=='M')
    {
        taxrate=6;
        float taxm=taxcalculator(type,price,taxrate);
        float amountm=price+taxm;
        cout<<"The Final price of a vehicle of type " << type <<" after adding the tax is $" << amountm;
    }
    if (type=='S')
    {
        taxrate=10;
        float taxs=taxcalculator(type,price,taxrate);
        float amounts=price+taxs;
        cout<<"The Final price of a vehicle of type " << type <<" after adding the tax is $" << amounts;
    }
    if (type=='V')
    {
        taxrate=12;
        float taxv=taxcalculator(type,price,taxrate);
        float amountv=price+taxv;
        cout<<"The Final price of a vehicle of type " << type <<" after adding the tax is $" << amountv;
    }
    if (type=='T')
    {
        taxrate=15;
        float taxt=taxcalculator(type,price,taxrate);
        float amountt=price+taxt;
        cout<<"The Final price of a vehicle of type " << type <<" after adding the tax is $" << amountt;
    }


}
float taxcalculator(char type, float price, float taxrate)
{
    float taxamount=price*(taxrate/100);
    return taxamount;
}






/*#include<iostream>
#include<iomanip>  // For std::fixed and std::setprecision
using namespace std;

// Function prototype
float taxcalculator(float price, float taxrate);

int main()
{
    char type;
    float price, taxrate;

    // Get user input for vehicle type and price
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of the vehicle: $";
    cin >> price;

    // Determine tax rate based on vehicle type
    switch(type)
    {
        case 'M':   // Motorcycle
            taxrate = 6;
            break;
        case 'E':   // Electric Vehicle
            taxrate = 8;
            break;
        case 'S':   // Sedan
            taxrate = 10;
            break;
        case 'V':   // Van
            taxrate = 12;
            break;
        case 'T':   // Truck
            taxrate = 15;
            break;
        default:
            cout << "Invalid vehicle type code!" << endl;
            return 1;   // Exit if the vehicle type is invalid
    }

    // Calculate tax and final amount
    float tax = taxcalculator(price, taxrate);
    float amount = price + tax;

    // Output the final price, formatted to two decimal places
    cout << fixed << setprecision(2);
    cout << "The final price of a vehicle of type " << type 
         << " after adding the tax is $" << amount << endl;

    return 0;
}

// Function to calculate tax based on price and tax rate
float taxcalculator(float price, float taxrate)
{
    return price * (taxrate / 100);
}
*/