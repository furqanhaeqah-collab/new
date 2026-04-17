#include <iostream>
using namespace std;
main()
{
    string letter;
    cout << "Enter a string: ";
    getline(cin, letter);
    int len = letter.length();
    for (int i = 0; i < len; i++)
    {
        if (letter[i] == 'z')
        {
            letter[i] == 'a';
        }
        else if (letter[i] == 'Z')
        {
            letter[i] == 'Z';
        }
        else
        {
            letter[i] = letter[i] + 1;
        }
    }
    cout << "Shifted String: ";
    for (int i = 0; i < len; i++)
    {
        cout << letter[i];
    }
}