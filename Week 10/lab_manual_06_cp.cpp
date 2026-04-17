#include <iostream>
using namespace std;
void checkIsAlphabetCase(char A_or_a);
main()
{
    char alpha;
    cout << "Enter a Character (A/a): ";
    cin >> alpha;
    checkIsAlphabetCase(alpha);
}
void checkIsAlphabetCase(char a_or_A)
{
    // Checking if alphabet is A or a
    if (a_or_A == 'A')
    {
        cout << "You have entered Capital A";
    }
    else
    {
        cout << "You have entered small a";
    }
}