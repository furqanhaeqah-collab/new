#include <iostream>
using namespace std;

// Function Prototype
float tax_calculator(char type, float price);
string vehicle(char type);

// Global Variable
float tax_m = 0.06;
float tax_e = 0.08;
float tax_s = 0.1;
float tax_v = 0.12;
float tax_t = 0.15;

// Main Function
main()
{
    float price;
    char type;
    cout << "Enter Vehicle type code(M/E/S/V/T): ";
    cin >> type;
    cout << "Enter vehicle price: ";
    cin >> price;
    float result = tax_calculator(type, price);
    string vehicle_type = vehicle(type);
    cout << "The final price on a vehicle of type " << vehicle_type << " after adding the tax is $" << result;
}

// Tax Calculator
float tax_calculator(char type, float price)
{
    float tax_amount = 0;
    float final_price;
    if (type == 'M')
    {
        tax_amount = price * tax_m;
        final_price = price + tax_amount;
    }
    else if (type == 'E')
    {
        tax_amount = price * tax_e;
        final_price = price + tax_amount;
    }
    else if (type == 'S')
    {
        tax_amount = price * tax_s;
        final_price = price + tax_amount;
    }
    else if (type == 'V')
    {
        tax_amount = price * tax_v;
        final_price = price + tax_amount;
    }
    else if (type == 'T')
    {
        tax_amount = price * tax_t;
        final_price = price + tax_amount;;
    }
    return final_price;
}

// Vehicle type
string vehicle(char type)
{
    string vehicle;
    if (type == 'M')
    {
        vehicle = "Motorcycle";
    }
    else if (type == 'E')
    {
        vehicle = "Electric";
    }
    else if (type == 'S')
    {
        vehicle = "Sedan";
    }
    else if (type == 'V')
    {
        vehicle = "Van";
    }
    else if (type == 'T')
    {
        vehicle = "Truck";
    }
    return vehicle;
}