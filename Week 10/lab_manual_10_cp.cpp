#include <iostream>
using namespace std;
void num_text(int number);
main()
{
    int num;
    cout << "Enter a number (1-99): ";
    cin >> num;
    num_text(num);
}
void num_text(int number)
{
    int ones = 0;
    ones = number % 10;
    int tens = number - ones;
    if (tens >= 10 && tens <= 90)
    {
        // For tens number
        if (tens == 10)
        {
            cout << "Ten";
        }
        else if (tens == 20)
        {
            cout << "Twenty";
        }
        else if (tens == 30)
        {
            cout << "Thirty";
        }
        else if (tens == 40)
        {
            cout << "Forty";
        }
        else if (tens == 50)
        {
            cout << "Fifty";
        }
        else if (tens == 60)
        {
            cout << "Sixty";
        }
        else if (tens == 70)
        {
            cout << "Seventy";
        }
        else if (tens == 80)
        {
            cout << "Eighty";
        }
        else if (tens == 90)
        {
            cout << "Ninty";
        }
    }
    if (number > 10 && number < 20)
    {
        // For number range 11-19
        if (number == 11)
        {
            cout << "Eleven" << endl;
        }
        else if (number == 12)
        {
            cout << "Twelve" << endl;
        }
        else if (number == 13)
        {
            cout << "Thirteen" << endl;
        }
        else if (number == 14)
        {
            cout << "Forteen" << endl;
        }
        else if (number == 15)
        {
            cout << "Fifteen" << endl;
        }
        else if (number == 16)
        {
            cout << "Sixteen" << endl;
        }
        else if (number == 17)
        {
            cout << "Seventeen" << endl;
        }
        else if (number == 18)
        {
            cout << "Eighteen" << endl;
        }
        else if (number == 19)
        {
            cout << "Ninteen" << endl;
        }
    }
    if (ones > 0 && ones < 10)
    {
        // For ones digit
        if (ones == 1)
        {
            cout << " one";
        }
        if (ones == 2)
        {
            cout << " two";
        }
        if (ones == 3)
        {
            cout << " three";
        }
        if (ones == 4)
        {
            cout << " four";
        }
        if (ones == 5)
        {
            cout << " five";
        }
        if (ones == 6)
        {
            cout << " six";
        }
        if (ones == 7)
        {
            cout << " seven";
        }
        if (ones == 8)
        {
            cout << " eigth";
        }
        if (ones == 9)
        {
            cout << " nine";
        }
    }
}