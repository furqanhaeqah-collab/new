#include <iostream>
using namespace std;

// Function prototype
void carData(int car[5][5], int company, int color);
int sumColor(int car[5][5], int color);
int sumCompany(int car[5][5], int company);
int converter(int car[5][5], int color);
void inverse_row_column(int car[5][5]);

// Main Function
main()
{
    const int row_size = 5;
    const int col_size = 5;
    int car[row_size][col_size] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}};
    cout << "Enter the number of company: ";
    int row;
    cin >> row;
    cout << "Enter the number of color: ";
    int col;
    cin >> col;
    carData(car, row, col);
    cout<<"Enter the color number: ";
    int color1;
    cin>>color1;
    int result1 = sumColor(car,color1);
    cout<<"Enter the company number: ";
    int company;
    cin>>company;
    int result2 = sumCompany(car,company);
    cout<<"Sum of cars is: "<<result2;
    cout<<"Sum of red cars is: "<<result1;
    cout<<"Enter the color number: ";
    int color2;
    cin>>color2;
    int result3 = converter(car,color2);
    cout<<"Sum of cars is: "<<result3;
    inverse_row_column(car);
}

// carData Function
// To view Toyota Blue Cars
void carData(int car[5][5], int company, int color)
{
    cout << car[company][color];
}

// sumColor Function
// To view the sum of cars of red color
int sumColor(int car[5][5], int color1){
    int sum1 =0;
    for(int rows=0;rows<5;rows++){
        sum1 = sum1+car[rows][color1];
    }
    return sum1;
}

// sumCompany Function
// To view the sum of cars of nissan company
int sumCompany(int car[5][5], int company){
    int sum2 = 0;
    for(int col = 0;col<5;col++){
        sum2 = sum2+car[company][col];
    }
    return sum2;
}

// converter Function
// To view the sum of cars of specific color
int converter(int car[5][5], int color2){
     int sum3 =0;
    for(int rows=0;rows<5;rows++){
        sum3 = sum3+car[rows][color2];
    }
    return sum3;
}

// inverse_row_column Function
// Convert rows into  columns and columns into rows
void inverse_row_column(int car[5][5])
{
    int tempr;
    int tempc;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            tempr = row;
            tempc = col;
            cout << car[tempc][tempr] << "\t";
        }
        cout << endl;
    }
}