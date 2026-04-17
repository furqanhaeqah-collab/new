#include <iostream>
using namespace std;
void time_travel(int hour, int min);
main()
{
    int hour, min;
    cout << "--- 24 Hour Format ---" << endl;
    cout << "Enter hours: ";
    cin >> hour;
    cout << "Enter minutes: ";
    cin >> min;
    time_travel(hour, min);
}
void time_travel(int hour, int min)
{
    // Time travel calculation
    int hour_min = hour * 60;
    int min_total = hour_min + min;
    int add_min = min_total + 15;
    int new_hour = add_min / 60;
    int new_min = add_min % 60;
    cout << new_hour << ":" << new_min;
}